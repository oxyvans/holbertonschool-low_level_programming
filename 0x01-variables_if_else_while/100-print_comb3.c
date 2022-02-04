#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int n = 1;
for (i = '0'; i <= '9'; i++)
{
for (n = i ; n <= '9'; n++)
{
if (n != i)
{
putchar(i);
putchar(n);
if (i == '8' && n == '9')
{
putchar(10);
}
else
{
putchar(',');
putchar(' ');
}
}
}
}

return (0);
}

