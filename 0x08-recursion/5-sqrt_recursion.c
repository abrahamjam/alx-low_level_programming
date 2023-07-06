#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 *_sqrt_recursion-returns the natural square root of a number
 *@n:number
 *Return:natural square root
 */
int _sqrt_recursion(int n)
{
	return(_sqrt(n, 1));
}

/**
 *sqrt-prints square root of integers
 *@n:number
 *@i:iterate number
 *Return:integer
 */
int _sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
