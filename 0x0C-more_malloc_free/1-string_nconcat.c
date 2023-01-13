#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to concatenate
* Return: pointer to the concatenated string,
* or NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int i, c, d, e;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (c = 0; s2[c] != '\0'; c++)
;

if (n >= c)
n = c;

a = malloc(i * sizeof(*a) + n * sizeof(*a) + 1);
if (a == NULL)
return (NULL);

for (d = 0; d < i; d++)
a[d] = s1[d];
for (e = 0; e < n; e++)
a[d + e] = s2[e];
a[d + e] = '\0';

return (a);
}
