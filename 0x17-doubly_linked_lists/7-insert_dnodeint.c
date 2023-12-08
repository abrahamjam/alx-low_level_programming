#include "lists.h"

/**
 *insert_dnodeint_at_index-inserts a new node in a given position
 *@h:a pointer to head
 *@idx:the position to insert
 *@n:integer
 *Return:null if it fail n, oterwise the address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (isx -- 0)
	{
		return (add_dnodeint h, n);
	}
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if( tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL))

		return (add-dnodeint_end(h, n));
	new = malloc(sizeof(dilistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
