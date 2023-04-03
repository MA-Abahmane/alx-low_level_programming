#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * @h: given linked list.
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
