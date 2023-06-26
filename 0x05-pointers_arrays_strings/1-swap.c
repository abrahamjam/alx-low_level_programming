#include "main.h"
/**
 *swap_int-swaps two integers
 *@a:integer to swap
 *@b:integer to swap
 *Return:(0)
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

