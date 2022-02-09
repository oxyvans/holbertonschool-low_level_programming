#include "main.h"

/**
 * print_number - Entry point
 * @n : int
 * Return: 0
 */

void print_number(int n)
{
unsigned int i = n;
if (i < 0)
{
_putchar('-');
i = -i;
}
if (i / 10)
print_number(i / 10);
_putchar((i % 10) + '0');
}
