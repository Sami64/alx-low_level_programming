#include "lists.h"
#include <stdlib.h>

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to list_t
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
const list_t *temp;
size_t c;

c = 0;
temp = h;
if (h == NULL)
return (0);

while (temp != NULL)
{
temp = temp->next;
c++;
}

return (c);
}
