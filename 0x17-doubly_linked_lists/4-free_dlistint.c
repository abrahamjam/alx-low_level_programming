#include "lists.h"

/**
 *free_dlistint-frees a dlistint
 *@head:head of dlistint
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
