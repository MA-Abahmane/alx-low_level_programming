#include "lists.h"

/**
 * print_listint - a function that prints all the
 *        elements of a listint_t list.
 * @h: given linked list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
int count = 0;

while (h)
{
count++;
printf("%d", h->n);
h = h->next;
printf("\n")
}

return (count);
}
