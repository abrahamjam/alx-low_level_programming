#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer on the first node where value is located, or
 * NULL if value is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node = list, *prev = NULL;

    if (!list)
        return (NULL);

    /* Using the express lane */
    while (node->express && node->express->n < value)
    {
        prev = node;
        node = node->express;
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }

    if (!node->express)
    {
        prev = node;
        while (node->next)
            node = node->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);

    /* Linear search */
    node = prev;
    while (node && node->index <= node->express->index && node->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }

    return (NULL);
}
