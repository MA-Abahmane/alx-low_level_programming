#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node
 *   at the beginning of a listint_t list.
 * @head: given linked list.
 * @n:    given number
 *
 * Return: the number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
int num = n;
listint_t *new_node = NULL;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = num;
new_node->next = *head;

*head = new_node;

return (*head);
}
