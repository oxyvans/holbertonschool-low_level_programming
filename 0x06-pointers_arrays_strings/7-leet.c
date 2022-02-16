#include "main.h"

/**
 * leet - main
 * @a: chars
 *
 *
 * Return: string
 */

char *leet(char *a)
{
int i, j;
char l[] = "aAeEoOtTlL";
char n[] = "4433007711";

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (a[i] == l[j])
	a[i] = n[j];
}
}
return (a);
}
