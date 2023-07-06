#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 *_sqrt_recursion-returns natural square root of number
 *@n:number
 *Return:resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion- square root of integers recursively
 *@n:number
 *@i:iterate number
 *Return:integer
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
