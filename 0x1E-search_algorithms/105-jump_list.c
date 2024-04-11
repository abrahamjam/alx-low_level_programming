#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    listint_t *node = list;

    if (!list)
        return (NULL);

    /* Jump to the block where the value might be */
    while (node->index + step < size && node->next && node->n < value)
    {
        prev = node->index;
        for (size_t i = 0; node->next && i < step; ++i)
            node = node->next;
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }

    /* Linear search within the block */
    printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);
    node = list;
    while (node->index < prev)
        node = node->next;
    while (node && node->index <= size && node->index <= prev + step)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }

    return (NULL);
}
