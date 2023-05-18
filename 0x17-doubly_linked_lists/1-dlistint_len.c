#include "lists.h"

/**
 * main -   a function that returns the number of elements in a linked   
 *    dlistint_t list.
 * @h: list to print its elements
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

while (h)
{
h = h->next;
count ++;
}

return (count);
}
