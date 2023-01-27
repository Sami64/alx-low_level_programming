#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a list_t list
* @head: pointer to list_t
* Return: void
*/

void free_list(list_t *head)
{
list_t *temp;
list_t *current;

current = head;

while (current != NULL)
{
temp = current->next;
free(current->str);
free(current);
current = temp;
}
}
