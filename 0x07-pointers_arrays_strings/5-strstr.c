#include "main.h"

/**
* _strstr - locates a substring
* @haystack: pointer to string
* @needle: pointer to substring
* Return: Pointer to beginning of located substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
return (haystack + i);
}
}
}
return (0);
}
