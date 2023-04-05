#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 *    at a given Index.
 * @head: given linked list.
 * @index:  given index.
 *
 * Return: return 1 on success, and -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count;
listint_t *ptr, *sub;

if (!*head || !head)
return (-1);

ptr = *head;

/* Delete head: */
if (index == 0)
{
*head = (*head)->next;
free(ptr);

return (1);
}

/* Delete body nodes: */
/* Find the node before the index */
count = 0;
while (count < (index - 1))
{

ptr = ptr->next;
if (ptr == NULL)
return (-1);

count++;
}

/* remove to node on index from
 *   the linked list and free it.
 */
sub = ptr->next;
ptr->next = sub->next;

free(sub);

return (1);
}
