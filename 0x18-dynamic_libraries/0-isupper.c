#include "main.h"
/**
 *_supper-checks for upper case character
 *@c:variable text
 *Return:(0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
