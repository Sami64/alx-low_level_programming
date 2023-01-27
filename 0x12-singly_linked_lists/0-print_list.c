#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to list_t
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *temp;
size_t c;

c = 0;
temp = h;
while (temp != NULL)
{
printf("[%d] %s\n", temp->len, temp->str);
temp = temp->next;
c++;
}

return (c);
}
