#include "lists.h"

/**
 * sum_listint - a function that inserts a new node
 *    at a given position.
 * @head: given linked list.
 * @idx:  given index.
 *
 * Return: pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int num = n, count = 0, size = 1;
listint_t *new_node = NULL, *ptr;

if (*head == NULL)
return (NULL);

/* The new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

ptr = *head;
/* Find the linked lists size*/
while (ptr->next != NULL)
{
ptr = ptr->next;
size++;
}

if (idx > size)
return (NULL);

ptr = *head;
/* search for the node in the index (idx) */
while (ptr->next != NULL)
{
if (count + 1 == idx)
{
break;
}
ptr = ptr->next;
count++;
}

/* add the new node */
new_node->n = num;

if (ptr->next != NULL)
new_node->next = ptr->next;

else
new_node->next = NULL;

ptr->next = new_node;

return (new_node);
}
