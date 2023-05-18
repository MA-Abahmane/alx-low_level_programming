#include "lists.h"

/**
 * delete_dnodeint_at_index - freeing list nodes at given index
 * @head: list head pointer
 * @index: give index index
 *
 * Return: 1 on success, -1 on fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ptr = *head;
dlistint_t *prev_node = *head;
unsigned int count;

/* if index is 0; free head */
if (index == 0 && *head)
{
if ((*head)->next)
{
*head = (*head)->next;
(*head)->prev = NULL;
free(ptr);
}
else
*head = NULL;
return (1);
}

/* free node at index */
count = 0;
while (count < (index - 1) && prev_node != NULL)
{
prev_node = prev_node->next;
count++;
}
/* concat previous node with the next next node, then free */
if (prev_node)
{
ptr = prev_node->next;
if (ptr->next)
{
ptr->next->prev = prev_node;
}
prev_node->next = ptr->next;
free(ptr);
return(1);
}

return (-1);
}
