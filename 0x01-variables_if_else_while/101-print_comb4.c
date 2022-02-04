#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int n = 1;
int j = 2;
for (i = '0'; i <= '9'; i++)
{
for (n = i ; n <= '9'; n++)
{
for (j = n ; j <= '9'; j++)
{
if (n != i  && n != j && i != j)
{
putchar(i);
putchar(n);
putchar(j);
if (i == '7' && n == '8' && j == '9')
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
}
return (0);
}
