#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer to memory area
* @src: pointer to memory area
* @n: number of bytes
* Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *temp;

temp = dest;
while (n > 0)
{
*temp = *src;
temp++;
src++;
n--;
}
return (temp);
}
