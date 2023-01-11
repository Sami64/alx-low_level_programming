#include "main.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of the array
* @c: char to initialize the array with
* Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *arr;
if (size == 0)
return (NULL);
arr = malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);
else
{
unsigned int i = 0;
while (size > 0)
{
arr[i] = c;
i++;
size--;
}
}
return (arr);
}
