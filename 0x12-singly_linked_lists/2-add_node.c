#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to list_t
 * @str: string to be added
 * Return: address of new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int i;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;

new->str = strdup(str);
new->len = i;
new->next = *head;
*head = new;

return (new);
}
