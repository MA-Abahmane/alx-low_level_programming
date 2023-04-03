#include "lists.h"

/**
 * pop_listint - a function that deletes the
 *      head node of a linked list.
 * @head: given linked list.
 *
 * Return: returns the head's node data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *ptr;

ptr = *head;
*head = ptr->next;

return (ptr->n);
}
