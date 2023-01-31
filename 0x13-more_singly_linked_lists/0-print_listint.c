#include "lists.h"
#include <stdlib.h>
#include <printf.h>

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to listint_t
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *temp;
size_t nodes;

for (temp = h, nodes = 0; temp != NULL; nodes++, temp = temp->next)
printf("%d", temp->n);

return (nodes);
}
