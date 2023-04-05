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
listint_t *prevNode, *curNode;

/* check if head is not null */
if((*head) != NULL)
{
prevNode = (*head);
curNode = (*head)->next;
(*head) = (*head)->next;

/* set the first node as the last one */
prevNode->next = NULL;

while((*head) != NULL)
{
(*head) = (*head)->next;
curNode->next = prevNode;

prevNode = curNode;
curNode = (*head);
}

/* set the last node as head */
(*head) = prevNode;
}

return (*head);
}
