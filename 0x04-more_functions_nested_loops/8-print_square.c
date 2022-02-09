#include "main.h"

/**
 * print_square - Entry point
 * @size : size
 * Return: 0
 */

void print_square(int size)
{
if (size > 0)
{
int i;
int j;
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
