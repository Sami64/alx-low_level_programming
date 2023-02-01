#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to listint_t
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
const listint_t *temp;
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
