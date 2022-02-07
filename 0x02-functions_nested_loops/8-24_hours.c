#include "main.h"

/**
 * jack_bauer  - puts funcion
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{

int h, m, a;

for (h = 00; h <= 23; h++)
{
for (m = 00; m <= 59; m++)
{
a = h / 10;
_putchar(a + '0');

a = h % 10;
_putchar(a + '0');

_putchar(':');

a = m / 10;
_putchar(a + '0');

a = m % 10;
_putchar(a + '0');

_putchar('\n');

}
}
}
