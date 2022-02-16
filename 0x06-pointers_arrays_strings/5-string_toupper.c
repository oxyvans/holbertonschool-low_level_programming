#include "main.h"

/**
 * string_toupper - comp two strings
 * @a : chars
 *
 *
 * Return: string
 */

char *string_toupper(char *a)
{
int i;
char aux;
for (i = 0; a[i] != '\0'; i++)
{
	if ((a[i] >= 'a') && (a[i] <= 'z'))
		{
		aux = a[i];
		a[i] = (aux - 32);
		}
}
return (a);
}
