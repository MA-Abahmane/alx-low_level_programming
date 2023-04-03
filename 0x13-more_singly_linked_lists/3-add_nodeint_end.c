#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 *           the end of a listint_t list.
 * @head: given linked list.
 * @n:    given number.
 *
 * Return: a pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
int num = n;
listint_t *new_node = NULL, *ptr;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = num;
new_node->next = NULL;

if (*head)
{
ptr = *head;
while (ptr->next != NULL)
ptr = ptr->next;

ptr->next = new_node;
}
/* if the list contains only one node */
else
*head = new_node;

return(new_node);
}
