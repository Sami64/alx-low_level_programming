#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: pointer to string
* @src: pointer to string
* @n: number of bytes
* Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
{
dest[i] = src[j];
}

return (dest);
}
