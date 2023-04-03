#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: given linked list.
 *
 */

void free_listint(listint_t *head)
{
listint_t *next;

while (head != NULL)
{
next = head;
head = head->next;
free(next);
}

}
