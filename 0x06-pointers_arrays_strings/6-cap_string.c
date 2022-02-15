#include "main.h"

/**
 * cap_string - main
 * @a : chars
 *
 *
 * Return: comp
 */

char *cap_string(char *a)
{
char aux[] = {'\t', ' ', '\n', ',', ';', '.', '!', '?', '"','(', ')','{','}'};
int i, j, max;

for (max = 0; a[max] != '\0'; max++)
{
}
max--;

for (i = 0; i < max; i++) 
{
	for (j = 0; aux[j] != '\0'; j++)
	{
	if (a[i] == aux[j])
	{
		if ((a[i + 1] >= 'a') && (a[i + 1] <= 'z'))
		       a[i + 1] -= 32;	
	}	
	}	
}
return (a);
}

