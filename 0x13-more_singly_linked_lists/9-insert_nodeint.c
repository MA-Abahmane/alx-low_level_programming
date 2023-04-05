#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 *      at a given position.
 * @head: given linked list.
 * @idx:  given index.
 *
 * Return: pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
int num = n;
listint_t *new_node = NULL, *ptr;

/* The new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = num;

ptr = *head;

/* If the new node will be the head node */
if (idx == 0)
{
new_node->next = (*head);
*head = new_node;
free(ptr);

return(*head);
}

/* if the new node will be placed in the lists body  */
while (idx > 1)
{
ptr = ptr->next;
if (!ptr)
{
free(ptr);
return (NULL);
}

idx--;
}

new_node->next = ptr->next;
ptr->next = new_node;

return (new_node);
}
