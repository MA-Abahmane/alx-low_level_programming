#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 *    given position.
 * @h: list to change
 * @idx: new node index
 * @n: data of new node
 *
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node, *ptr = *h;
unsigned int count = 0;

/* creat new node */
node = malloc(sizeof(dlistint_t));
if (node == NULL)
  return (NULL);

node->n = n;
/* if new node will be set a head of the list */
if (idx == 0)
{
if (*h)
{
node->next = *h;
(*h)->prev = node;
}
*h = node;
return (node);
}

/* if: the head node in it larger than our node */
while (count < (idx - 1) && ptr != NULL)
{

ptr = ptr->next;
count++;
}

if (ptr)
{
if (ptr->next)
{
ptr->next->prev = node;
}
node->next = ptr->next;
node->prev = ptr;
ptr->next = node;

return(node);
}

return (NULL);
}
