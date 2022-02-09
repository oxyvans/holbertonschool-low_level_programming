#include "main.h"

/**
 * print_triangle - Entry point
 * @size : size
 * Return: 0
 */

void print_triangle(int size)
{
if (size > 0)
{
int i;
int j;
int n = 0;
for (j = 1; j <= size; j++)
{
for (i = size; i > j; i--)
{
_putchar(' ');
n++;
}
while (n < size)
{
_putchar('#');
n++;
}
_putchar('\n');
n = 0;
}
}
else
{
_putchar('\n');
}
}
