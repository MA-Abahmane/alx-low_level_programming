#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 *    the nth node of a listint_t linked list.
 * @head:   given linked list.
 * @index:  given index number.
 * Return: the number (n) on the index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head)
{
while (head != NULL)
{
if (count == index)
return (head);

head = head->next;
count++;
}
}
