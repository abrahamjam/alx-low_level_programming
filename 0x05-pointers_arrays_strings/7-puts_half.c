#include "main.h"
/**
 *puts2-prints only one character of two
 *@str:string input
 *Return:print output
 */
void puts_half(char *str)
{
	int len, n, i;
	len = o;

	while (str[len] != '\0')
	{
		len++
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str(n + 1));
		}
	}
	_putchar('\n');
}
