#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: list head pointer.
 *
 * Return: None.
 */

void free_list(list_t *head)
{
list_t *list;

while (head)
{
list = head->next;
free(head->str);
free(head);
head = list;
}
}
