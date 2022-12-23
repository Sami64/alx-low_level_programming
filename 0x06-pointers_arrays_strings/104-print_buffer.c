#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_buffer - prints a buffer
* @b: pointer to buffer
* @size: size of buffer
* Return: 0
*/

void print_buffer(char *b, int size)
{
int i;
for (i = 0; i < size; i++)
{
if (i % 10 == 0)
printf("%08x: ", i);
printf("%02x ", b[i]);
if (isprint(b[i]))
putchar(b[i]);
else
putchar('.');
if (i % 20 == 19)
putchar('\n');
}
if (size % 20 != 0)
putchar('\n');
}
