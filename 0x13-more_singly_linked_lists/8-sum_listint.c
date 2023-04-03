#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head:   given linked list.
 *
 * Return: the sum of numbers (n).
 */

int sum_listint(listint_t *head)
{
int count = 0;

if (head)
{

while (head != NULL)
{
count += head->n;

head = head->next;
}
}

if (count == 0)
return (0);

return (count);
}
