#include <stdio.h>
/**
 * main-A program that prints lower and upper cases
 * Return: (0)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while
		(c <= 'z')
	{
		putchar(c);
		c++;
	}
	while
		(d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
