#include <stdio.h>

/**
 * main - puts funcion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar(10);

return (0);
}
