#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - main
 * @dest : chars
 * @src : chars
 * Return : dest
 */

char *_strcpy(char *dest, char *src)
{
int i, n;
char str;
i = (_strlen(src));
if (i > 0)
{
for (n = 0; n <= i; n++)
{
str = src[n];
dest[n] = str;
}
}
return (dest);
}
