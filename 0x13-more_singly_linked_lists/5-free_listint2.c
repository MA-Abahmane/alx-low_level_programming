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
listint_t *next, *ptr;
ptr = *head;

while (ptr != NULL)
{
next = ptr->next;
free(next);
ptr = next;
}
*head = NULL;
}
