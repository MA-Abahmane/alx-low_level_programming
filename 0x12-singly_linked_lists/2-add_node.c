#include "lists.h"

/**
 * add_node - Write a function that adds a
 *  new node at the beginning of a list_t list.
 * @head: list head pointer.
 * @str: given sting to add to the list.
 *
 * Return: a pointer to the new made list.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *pt;
char *s = strdup(str);
int i = 0;

while (str[i] != '\0')
i++;

pt = malloc(sizeof(list_t));
if (pt == NULL)
return (NULL);

pt->str = s;
pt->len = strlen(s);
pt->next = *head;

*head = pt;

return (pt);
}
