#include "main.h"
/**
 *_abs-A function that computes the absolute value of a number
 *@c:The character to print
 *Return:Absolute value of ab
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
