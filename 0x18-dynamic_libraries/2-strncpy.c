#include "main.h"

/**
* _strncpy - copies a string
* @dest: pointer to string
* @src: pointer to string
* @n: number of chars to copy
* Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; n > i; i++)
dest[i] = '\0';

return (dest);
}
