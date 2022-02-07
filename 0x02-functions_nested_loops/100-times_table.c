#include "main.h"

/**
 * print_times_table - Entry point
 * @n : int
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
if(n > 0 && n <= 15)
{
int a, b, c;
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (c < 10)
{
if (b != 0)
_putchar(' ');
_putchar((c % 10) + '0');
}
else
{
  if(c >= 100)
  {
    _putchar(((c / 10) / 10) + '0');
    _putchar(((c / 10) % 10) + '0');
    _putchar((c % 10) +'0');
   }
  else
    {
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
    }
}
if (b != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
