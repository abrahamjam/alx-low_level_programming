#include "main.h"
/**
 *more_numbers-print ten times the number
 *follwed by a new line
 */
void more_numbers(void)
{
	int x, y;
	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	if (y > 0)
	{
	_putchar((y / 10 ) + '0');
	}
	if (y > 0)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
}
