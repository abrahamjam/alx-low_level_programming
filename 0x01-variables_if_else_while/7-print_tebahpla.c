#include <stdio.h>
/**
*main-A program to print lower case in reerse
*Return:(0)
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
