#include <stdio.h>
/**
*main-A program to print combinations of three digits
*Return:(0)
*/
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundrds = '0';

	for (hundrds = '0'; hundrds <= '9'; hundrds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!(ones == tens || tens == hundrds || tens > ones || hundrds > tens))
				{
					putchar(hundrds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundrds == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
