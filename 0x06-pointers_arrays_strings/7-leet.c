#include "main.h"

/**
 * string_toupper - comp two strings
 * @ : chars
 *
 *
 * Return: string
 */

char *leet(char *a)
{
int i;
for (i = 0; a[i] != '\n'; i++)
{
 if((a[i] == 'a') || (a[i] == 'A'))
	a[i] = '4';

 if((a[i] == 'e') || (a[i] == 'E'))
        a[i] = '3';

 if((a[i] == 'o') || (a[i] == 'O'))
        a[i] = '0';

 if((a[i] == 't') || (a[i] == 'T'))
        a[i] = '7';

 if((a[i] == 'l') || (a[i] == 'L'))
        a[i] = '1';

}
return (a);
}
