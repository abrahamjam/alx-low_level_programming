#include "search_algos.h"

/**
 *print_array-Prints an array of integers.
 *@array:array to be printed.
 *@size:size of the array.
 */
void print_array(int *array, size_t size)
{
    size_t i;

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 *binary_search-Helper function to perform binary search.
 *@array: The array to search in.
 *@left: The left index of the subarray to search in.
 *@right: The right index of the subarray.
 *@value: The value to search for. 
 * Return: The index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    while (left <= right)
    {
        print_array(array + left, right - left + 1);

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (int)mid;
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

/**
 *exponential_search - Searches for a value using the Exponential search algorithm.
 *@array:pointer to the first element of the array to search in.
 *@size:number of elements in array.
 *@value:value to search for. 
 *Return: The index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (!array || size == 0)
        return -1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound < size ? bound : size - 1);
    return binary_search(array, bound / 2, min(bound, size - 1), value);
}
