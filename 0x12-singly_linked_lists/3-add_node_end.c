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
list_t *current;
list_t *new;
size_t str_len = 0;

if (str == NULL)
str_len = 0;

while (str[str_len] != '\0')
str_len++;

current = malloc(sizeof(list_t));
if (current == NULL)
return (NULL);

current->str = strdup(str);
current->len = str_len;
current->next = NULL;

new = *head;

if (new == NULL)
{
*head = current;
}
else
{
while (new->next != NULL)
new = new->next;
new->next = current;
}
return (*head);
}
