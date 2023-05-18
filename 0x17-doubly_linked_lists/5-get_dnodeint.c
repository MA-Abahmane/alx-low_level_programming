#include "lists.h"

/**
 * free_dlistint -  a function that frees a given list
 * @head: list to free
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
if (index > (count - 1) || index < 0)
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
