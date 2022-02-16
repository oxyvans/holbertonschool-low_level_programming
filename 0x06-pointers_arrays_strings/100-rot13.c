#include "main.h"

/**
 * rot13 - rot 13
 * @a : chars
 *
 *
 * Return: string
 */

char *rot13(char *a)
{
int i, j;
char a_z[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; a_z[j] != '\0'; j++)
{
if (a[i] == a_z[j])
{
a[i] = rot[j];
break;
}
}
}
return (a);
}
