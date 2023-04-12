#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_strncmp-comparetwostrings
*@s1:thefirststring
*@s2:thesecondstring
*@n:themaxnumberofbytestocompare
*
*Return:0ifthefirstnbytesofs1ands2areequal,otherwisenon-zero
*/
int _strncmp(const char *s1, const char *s2, size_t n)
{
for ( ; n && *s1 && *s2; --n, ++s1, ++s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
}
if (n)
{
if (*s1)
return (1);
if (*s2)
return (-1);
}
return (0);
}

/**
*_close-closeafiledescriptorandprintanerrormessageuponfailure
*@fd:thefiledescriptortoclose
*/
void _close(int fd)
{
if (close(fd) != -1)
return;
write(STDERR_FILENO,"Error:Can'tclosefd\n",22);
exit(98);
}

/**
*_read-readfromafileandprintanerrormessageuponfailure
*@fd:thefiledescriptortoreadfrom
*@buf:thebuffertowriteto
*@count:thenumberofbytestoread
*/
void _read(int fd, char *buf, size_t count)
{
if (read(fd, buf, count) != -1)
return;
write(STDERR_FILENO, "Error:Can'treadfromfile\n",28);
_close(fd);
exit(98);
}

/**
*elf_magic-printELFmagic
*@buffer:theELFheader
*/
void elf_magic(const unsigned char *buffer)
{
unsigned int i;

if (_strncmp((const char *) buffer, ELFMAG, 4))
{
write(STDERR_FILENO, "Error:NotanELFfile\n",23);
exit(98);
}

printf("ELFHeader:\nMagic:");

for (i = 0; i < 16; ++i)
printf("%02x%c", buffer[i],i<15?'':'\n');
}

/**
*elf_class-printELFclass
*@buffer:theELFheader
*
*Return:bitmode(32or64)
*/
size_t elf_class(const unsigned char *buffer)
{
printf("%-34s","Class:");

if (buffer[EI_CLASS] == ELFCLASS64)
{
printf("ELF64\n");
return (64);
}
if (buffer[EI_CLASS] == ELFCLASS32)
{
printf("ELF32\n");
return (32);
}
printf("<unknown:%x>\n", buffer[EI_CLASS]);
return (32);
}

/**
*elf_data-printELFdata
*@buffer:theELFheader
*
*Return:1ifbigendian,otherwise0
*/
int elf_data(const unsigned char *buffer)
{
printf("%-34s","Data:");

if (buffer[EI_DATA] == ELFDATA2MSB)
{
printf("2'scomplement,bigendian\n");
return (1);
}
if (buffer[EI_DATA] == ELFDATA2LSB)
{
printf("2'scomplement,littleendian\n");
return (0);
}
printf("Invaliddataencoding\n");
return (0);
}

/**
*elf_version-printELFversion
*@buffer:theELFheader
*/
void elf_version(const unsigned char *buffer)
{
printf("%-34s%u","Version:", buffer[EI_VERSION]);

if (buffer[EI_VERSION] == EV_CURRENT)
printf("(current)\n");
else
printf("\n");
}

/**
*elf_osabi-printELFOS/ABI
*@buffer:theELFheader
*/
void elf_osabi(const unsigned char *buffer)
{
const char *os_table[19] = {
"UNIX-SystemV",
"UNIX-HP-UX",
"UNIX-NetBSD",
"UNIX-GNU",
"<unknown:4>",
"<unknown:5>",
"UNIX-Solaris",
"UNIX-AIX",
"UNIX-IRIX",
"UNIX-FreeBSD",
"UNIX-Tru64",
"Novell-Modesto",
"UNIX-OpenBSD",
"VMS-OpenVMS",
"HP-Non-StopKernel",
"AROS",
"FenixOS",
"NuxiCloudABI",
"StratusTechnologiesOpenVOS"
};

printf("%-34s","OS/ABI:");

if (buffer[EI_OSABI]<19)
printf("%s\n", os_table[(unsigned int) buffer[EI_OSABI]]);
else
printf("<unknown:%x>\n", buffer[EI_OSABI]);
}

/**
*elf_abivers-printELFABIversion
*@buffer:theELFheader
*/
void elf_abivers(const unsigned char*buffer)
{
printf("%-34s%u\n","ABIVersion:",buffer[EI_ABIVERSION]);
}

/**
*elf_type-printELFtype
*@buffer:theELFheader
*@big_endian:endianness(bigendianifnon-zero)
*/
void elf_type(const unsigned char *buffer, int big_endian)
{
char *type_table[5] = {
"NONE(Nofiletype)",
"REL(Relocatablefile)",
"EXEC(Executablefile)",
"DYN(Sharedobjectfile)",
"CORE(Corefile)"
};
unsigned int type;

printf("%-34s","Type:");

if (big_endian)
type = 0x100*buffer[16]+buffer[17];
else
type = 0x100*buffer[17]+buffer[16];

if (type<5)
printf("%s\n",type_table[type]);
else if (type>=ET_LOOS&&type<=ET_HIOS)
printf("OSSpecific:(%4x)\n",type);
else if (type>=ET_LOPROC&&type<=ET_HIPROC)
printf("ProcessorSpecific:(%4x)\n",type);
else
printf("<unknown:%x>\n",type);
}

/**
*elf_entry-printentrypointaddress
*@buffer:stringcontainingtheentrypointaddress
*@bit_mode:bitmode(32or64)
*@big_endian:endianness(bigendianifnon-zero)
*/
void elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
{
int address_size=bit_mode/8;

printf("%-34s0x","Entrypointaddress:");

if (big_endian)
{
while (address_size&&!*(buffer))
--address_size,++buffer;

printf("%x",*buffer&0xff);

while (--address_size>0)
printf("%02x",*(++buffer)&0xff);
}
else
{
buffer+=address_size;

while (address_size&&!*(--buffer))
--address_size;

printf("%x",*buffer&0xff);

while (--address_size>0)
printf("%02x",*(--buffer)&0xff);
}

printf("\n");
}

/**
*main-copyafile'scontentstoanotherfile
*@argc:theargumentcount
*@argv:theargumentvalues
*
*Return:Always0
*/
int main(int argc, const char *argv[])
{
unsigned char buffer[18];
unsigned int bit_mode;
int big_endian;
int fd;

if (argc != 2)
{
write(STDERR_FILENO,"Usage:elf_headerelf_filename\n",31);
exit(98);
}

fd = open(argv[1],O_RDONLY);
if (fd == -1)
{
write(STDERR_FILENO,"Error:Can'treadfromfile\n",28);
exit(98);
}

_read(fd,(char *) buffer, 18);

elf_magic(buffer);
bit_mode=elf_class(buffer);
big_endian=elf_data(buffer);
elf_version(buffer);
elf_osabi(buffer);
elf_abivers(buffer);
elf_type(buffer,big_endian);

lseek(fd, 24, SEEK_SET);
_read(fd, (char *) buffer, bit_mode / 8);

elf_entry(buffer, bit_mode, big_endian);

_close(fd);

return (0);
}