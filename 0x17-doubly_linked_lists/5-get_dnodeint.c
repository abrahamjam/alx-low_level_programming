#include "lists.h"

/**
 *get_dnodeint_at_index-locates a node
 *@index:node to locate
 *Return:null if not exist,otherwise the location
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
