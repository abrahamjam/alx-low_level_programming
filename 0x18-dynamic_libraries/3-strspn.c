#include "main.h"
/**
 *_strspn-Entry point
 *@s:input char
 *@accept:input character
 *Return:(0)
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value, check;

    value = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        check = 0;
        for (n = 0; accept[n] != '\0'; n++)
        {
            if (accept[n] == s[i])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            break;
        }
        value++;
    }
    return value;
}
