#include <stdio.h>

/**
 * suma_multiplos - Entry point
 *
 * Return: Always 0 (Success)
 */

int suma_multiplos(void)
{
int n, res;
res = 0;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
res = res + n;
}
printf("%d\n", res);
return (0);
}
