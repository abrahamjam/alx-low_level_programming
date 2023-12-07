#include "lists.h"

/**
 *add_dnodeint-adds new node
 *@head:a pointer to the head
 *@n:integer for new node
 *Return:NULL if it fails, otherwise the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return( new);
}