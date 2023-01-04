#include "main.h"

/**
* _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
char *temp;

temp = s;
while (n > 0)
{
*temp = b;
temp++;
n--;
}
return (temp);
}
