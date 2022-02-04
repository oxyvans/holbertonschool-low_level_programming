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
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar(((i / 10) % 10) + '0');
putchar(((i / 1) % 10) + '0');
putchar(' ');
putchar(((j / 10) % 10) + '0');
putchar(((j / 1) % 10) + '0');
if (i == 98 && j == 99)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
