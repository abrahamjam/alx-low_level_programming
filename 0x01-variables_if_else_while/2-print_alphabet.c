#include <stdio.h>
/**
 * main-A progra to print alphabeth in small letters
 * Return:(0)
 */
int main(void)
{
	char c;

	c = 'a';

	while
		(c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
