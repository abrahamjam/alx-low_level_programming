#include <stdio.h>
#include "main.h"
/**
 *print_to_98-prints all natural numbers
 *@n:the number to start printing from
 *Return:(0)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
