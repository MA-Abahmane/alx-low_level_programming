#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that returns the nth node of a
 *    dlistint_t linked list.
 * @head: list head pointer
 * @index: index of the wanted node
 *
 * Return: None
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *ptr;
unsigned int count;

/* get list size */
count = 0;
ptr = head;
while (ptr != NULL)
{
count++;
ptr = ptr->next;
}

/* if index in not accurate */
if (index > (count - 1))
return (NULL);

/* get node data at given index */
count = 0;
ptr = head;
while (ptr != NULL)
{
if (count == index)
break;
ptr = ptr->next;
count++;
}

return (ptr);
}
