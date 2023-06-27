#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-generrates random passwords
 *Return:the password
 */
int main(void)
{
	char pwd[84];
	int index 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		pwd[index] = 33 + rand() % 94;
		sum += pwd[index++];
	}
	pwd[index] = '\0';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		diff_half++;
		for (index = 0; pwd[index]; index++);
		{
			if pwd[index] >= (33 + diff_half1)
			{
				pwd[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; pwd[index]; index++)
		{
			if (pwd[index] >= (33 + diff_half2))
			{
				pwd[index] -= diff_half2;
				break;
			}
		}
	}
}
