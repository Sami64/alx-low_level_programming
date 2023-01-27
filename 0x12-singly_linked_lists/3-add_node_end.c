#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer to list_t
* @str: string to be added
* Return: address of new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
int i;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;

new->str = strdup(str);
new->len = i;
new->next = NULL;

if (*head == NULL)
*head = new;
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;

return (new);
}
}
