#include <stdio.h>
/**
 * main-A program that prints lower and upper cases
 * Return: (0)
 */
int main(void)
{
	char n = 97;
	char m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
