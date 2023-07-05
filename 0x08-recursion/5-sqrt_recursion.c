#include "main.h"
/**
 *sqrt-prints square root of integers
 *@n:number
 *@i:iterate number
 *Return:integer
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
