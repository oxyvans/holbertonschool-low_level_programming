#include "main.h"

/**
 * print_diagonal - Entry point
 * @n : int
 * Return: 0
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i;
int j;
for (j = 1; j <= n; j++)
{
for (i = 2; i <= j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
