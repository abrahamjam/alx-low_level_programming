#include "search_algos.h"
/**
 *linear_search-search linear form in array for element
 *@array:the array list
 *@size:the size of the array
 *@value:the value of the array
 * Return: index where user looks for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} return (-1);
}
