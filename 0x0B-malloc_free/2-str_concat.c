#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to the concatenated string,
*/

char *str_concat(char *s1, char *s2)
{
char *a;
int i, c, d, e;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (c = 0; s2[c] != '\0'; c++)
;

a = malloc(i * sizeof(*a) + c * sizeof(*a) + 1);
if (a == NULL)
return (NULL);

for (d = 0; d < i; d++)
a[d] = s1[d];
for (e = 0; e < c; e++)
a[d + e] = s2[e];
a[d + e] = '\0';

return (a);
}
