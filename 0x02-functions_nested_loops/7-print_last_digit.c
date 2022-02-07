#include "main.h"

/**
 * print_last_digit - puts funcion
 * @c : c int
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int n = (c % 10);
if (n < 0)
n = -n;
_putchar (n + '0');
return (n);
}
