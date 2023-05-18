#include "lists.h"

/**
 * sum_dlistint -  a function that returns the sum of all the 
 *    data (n) of a dlistint_t linked list.
 * @head: list to sum its data
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *ptr;
int sum = 0;

if (head == NULL)
return (0);

/* sum all the nodes data 'n' */
ptr = head;
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}

return (sum);
}
