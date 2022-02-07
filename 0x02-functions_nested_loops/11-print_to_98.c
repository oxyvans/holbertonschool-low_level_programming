#include "main.h"

/**
 * print_to_98 - to 98
 * @n : int
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf("%c", ',');
printf("%c", ' ');
}
else
{
putchar(10);
}
}
}
else
{
for (n = n; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf("%c", ',');
printf("%c", ' ');
}
else
{
putchar(10);
}
}
}
}
