#include "lists.h"

/**
 * add_node_end - Write a function that adds a
 *   new node at the end of a list_t list.
 * @head: list head pointer.
 * @str: given sting to add to the end of the list.
 *
 * Return: a pointer to the newly made list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node_pt, *check;
char *s = strdup(str);
int i = 0;

node_pt = malloc(sizeof(list_t));
if (node_pt == NULL)
return (NULL);

if (str)
{
while (str[i] != '\0')
i++;

node_pt->str = i;
node_pt->len = count;
}
else
{
node_pt->str = NULL;
node_pt->len = 0;
}
node_pt->next = NULL;

if (*head)
{
check = *head;
while (check->next != NULL)
{
check = check->next;
}
check->next = node_pt;
}
else
*head = node_pt;

return (node_pt);
}
