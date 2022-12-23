#include "main.h"

/**
* leet - encodes a string into 1337
* @str: chars
* Return: str
*/

char *leet(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == 97 || str[i] == 65)
str[i] = '4';
if (str[i] == 101 || str[i] == 69)
str[i] = '3';
if (str[i] == 111 || str[i] == 79)
str[i] = '0';
if (str[i] == 116 || str[i] == 84)
str[i] = '7';
if (str[i] == 108 || str[i] == 76)
str[i] = '1';
}

return (str);
}
