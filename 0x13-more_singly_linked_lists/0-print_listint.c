#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to listint_t
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

if (h == NULL)
return (0);

while (h->next != NULL)
{
printf("%d", h->n);
h = h->next;
nodes++;
}


return (nodes);
}
