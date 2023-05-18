#include "lists.h"

/**
 * free_dlistint -  a function that frees a given list
 * @head: list to free
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr, *next_point;

/* free list */
ptr = head;
while (ptr != NULL)
{
next_point = ptr->next;
free(ptr);
ptr = next_point;
}

}
