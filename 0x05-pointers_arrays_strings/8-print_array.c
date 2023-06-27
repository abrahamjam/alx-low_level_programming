#include "main.h"
/**
 *print_array-prints n elemnts of an array
 *@a:array character
 *@n:number of elements of the array
 *Return:a and n inputs
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		printf("%d, ", a[inc]);
	}
	if (inc != n - 1)
	{
		printf("%d", a[inc]);
	}
	printf("\n");
}
