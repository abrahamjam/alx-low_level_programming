#include "main.h"
#include <stdlib.h>
/**
 *array_range-range of array
 *@min:minimun of range
 *@max:maximum of range
 *Return:integer value
 */
int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
