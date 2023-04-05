#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t
 *    linked list.
 * @head: given linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *curr;

/* check if head is not null */
if((*head) != NULL)
{
prev = (*head);
curr = (*head)->next;

(*head) = (*head)->next;

/* set the first node as the last one */
prev->next = NULL;
while ((*head) != NULL)
{
(*head) = (*head)->next;
curr->next = prev;

prev = curr;
curr = (*head);
}

/* set the last node as head */
(*head) = prev;
}

return (*head);
}
