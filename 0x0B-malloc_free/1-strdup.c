#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly
* allocated space in memory,
* which contains a copy of the string
* given as a parameter
* @str: string to copy
* Return: pointer to the duplicated string,
* or NULL if str = NULL
*/

char *_strdup(char *str)
{
char *arr;

if (str == NULL)
return (NULL);
arr = malloc(sizeof(str));
if (arr == NULL)
return (NULL);
else
{
unsigned int i = 0;
while (str[i] != '\0')
{

arr[i] = str[i];
i++;
}
}
return (arr);
}
