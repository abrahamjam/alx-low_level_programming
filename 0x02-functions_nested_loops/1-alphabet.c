#include "main.h">
/**
*print-alphabet-A program that prints alphabet in lower case
*Return:(0)
*/
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
