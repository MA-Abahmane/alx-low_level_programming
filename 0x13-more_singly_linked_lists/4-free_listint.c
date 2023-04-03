#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: given linked list.
 *
 * Return: None
 */

void free_listint(listint_t *head)
{
listint_t *next;

while (head)
{
next = head->next;
free(head->n);
free(head);
head = next;
}

}
