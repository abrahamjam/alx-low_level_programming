#include "main.h"
/**
 *puts2-prints only one character of two
 *@str:string input
 *Return:print output
 */
void puts_half(char *str)
{
	int o;

	int longi = 0;
	int t = 0;

	char *y = str;

	while (*y != '\n')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
