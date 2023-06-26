#include "main.h"
/**
 *_puts-prints a string folloewd by a new line
 *@str:string
 *Return:string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

