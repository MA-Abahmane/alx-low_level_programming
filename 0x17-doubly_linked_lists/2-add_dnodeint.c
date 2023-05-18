#include "lists.h"

/**
 * main -  a function that adds a new node at the beginning of a     
 *    dlistint_t list.
 * @h: list to add node to
 *
 * Return: new made node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL;

/* seting the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;

/* if head node dosent exist, set new_node as head */
if (*head == NULL)
{
new_node->next = NULL;

}
/* if head node exist, set it as next node */
if (*head)
{
new_node->next = *head;
(*head)->prev = new_node;

}

/* set the new node as the head of list*/
*head = new_node;

return (new_node);
}
