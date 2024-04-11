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
 *binary_search_rec - Helper function to perform recursive binary search.
 *@array:array to search in.
 *@left:left index of the subarray to search in.
 *@right:right index of the subarray.
 *@value:value to search for.
 *Return:index where value is located, or -1 if not found.
 */
int binary_search_rec(int *array, size_t left, size_t right, int value)
{
    if (right >= left)
    {
        size_t mid = left + (right - left) / 2;

        print_array(array + left, right - left + 1);

        if ((mid == left || value > array[mid - 1]) && array[mid] == value)
            return (int)mid;

        if (array[mid] >= value)
            return binary_search_rec(array, left, mid, value);
        return binary_search_rec(array, mid + 1, right, value);
    }

    return -1;
}

/**
 *advanced_binary-Searches for a value in a sorted array of integers.
 *@array:pointer to the first element of the array to search in.
 *@size:number of elements in array.
 *@value:value to search for.
 *Return:The index where value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return -1;

    return binary_search_rec(array, 0, size - 1, value);
}
