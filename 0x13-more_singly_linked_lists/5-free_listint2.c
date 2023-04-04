#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *              and sets head to NULL.
 * @head: given linked list.
 *
 * Return: None
 */

void free_listint2(listint_t **head)
{
listint_t *node, *ptr;
ptr = *head;

while (ptr != NULL)
{
node = ptr;
ptr = ptr->next;
free(node);
}

*head = NULL;
}
