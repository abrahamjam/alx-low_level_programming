#include <unistd.h>
/**
 *_putchar-writes the character tc c stdout
 *@:The charcter to print
 *Return:On success (1) 
 *On error:-1 is returned,and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
