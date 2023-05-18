#include "lists.h"

/**
 * main -  a function that adds a new node at the end of a     
 *    dlistint_t list.
 * @h: list to add node to
 *
 * Return: newly made node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL, *ptr;

/* seting the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

/* if head node dosent exist, set new_node as head */
if (*head == NULL)
{

new_node->prev = NULL;
*head = new_node;
}

/* if head node exist, get the last node and set it after it */
else
{
ptr = *head;
while (ptr->next != NULL && ptr)
{
ptr = ptr->next;
}

new_node->prev = ptr;
ptr->next = new_node;
}
/* set the new node as the head of list*/

return (new_node);
}
