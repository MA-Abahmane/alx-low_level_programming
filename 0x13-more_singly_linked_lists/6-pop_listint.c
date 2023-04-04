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
int val = 0;
listint_t *ptr;

val = (*head)->n;

ptr = *head;

*head = (*head)->next;

free(ptr);
return (val);
}
