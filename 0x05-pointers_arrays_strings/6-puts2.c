#include "main.h"
/**
 *puts2-prints only one character at a time
 *starting with first one
 *@str:string input
 *Return:first character
 */
void puts2(char *str)
{
	int o;
	int longi = 0;
	int t = 0;
	char *y = str;

	while (*y != '\0')
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
