#include "main.h"

/**
* _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
int i;

i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
