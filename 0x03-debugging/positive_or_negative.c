#include "main.h"
/**
 *positive_or_negative-test for positve or negative numbers
 *@i:integer to be tested
 *Return:(0)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
