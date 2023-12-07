#include "lists.h"

/**
 *sum_dlistint-ADDS ALL DATA OD DLISTINT
 *@head:head of dlistint
 *Return:sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int (sum) = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
