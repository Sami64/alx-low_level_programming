#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
* Return: pointer to the newly allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a, *b;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
a = malloc(new_size);
if (a == NULL)
return (NULL);
return (a);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

a = malloc(new_size);
if (a == NULL)
return (NULL);

b = ptr;
for (i = 0; i < old_size && i < new_size; i++)
a[i] = b[i];

free(ptr);

return (a);
}
