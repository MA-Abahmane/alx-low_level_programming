#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 *    at a given Index.
 * @head: given linked list.
 * @idx:  given index.
 *
 * Return: return 1 on success, and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *ptr;

if (!*head || !head)
return (-1);

ptr = *head;

if (index == 0)
{
*head = (*head)->next;
free(ptr);
}

else
{

while (ptr->next != NULL)
{
if (count + 1 == index)
break;

ptr = ptr->next;

if (ptr == NULL)
return (-1);

count++;
}

ptr->next = ptr->next->next;
}

return (1);
}
