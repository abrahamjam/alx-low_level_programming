#include "main.h"
/**
 *print_array-prints n elemnts of an array
 *@a:array character
 *@n:number of elements of the array
 *Return:a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(",%d", a[i]);
		}
	}
	printf('\n');
}
