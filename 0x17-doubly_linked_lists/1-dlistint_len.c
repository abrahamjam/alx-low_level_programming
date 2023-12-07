#include "lists.h"

/**
 *dlistint_len-counts elements in dlistint
 *@h:the head
 *Return:the number of items
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
