#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest : pointer
 * @src : pointer
 * @n : int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (k = 0; src[k] != '\0'; k++)
{
}
if (n > k)
n = k;
for (j = 0; j < n; j++, i++)
{
dest[i] = src[j];
}
return (dest);
}
