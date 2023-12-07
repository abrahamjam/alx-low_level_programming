#include "lists.h"
/**
 *print_dlistint-prints all the elements of a dlist_t list.
 *@h:singly linked list.
 *Return:number of nodes in the lisst
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
