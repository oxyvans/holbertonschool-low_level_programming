#include "main.h"

/**
 * print_line - Entry point
 * @n : int
 * Return: 0
 */

void print_line(int n)
{
if (n > 0)
{
int j;
for (j = 1; j <= n; j++)
{
_putchar('_');
}
}
_putchar('\n');
}
