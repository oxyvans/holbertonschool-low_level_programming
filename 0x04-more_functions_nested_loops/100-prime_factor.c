#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 *
 */
int main(void)
{
long int n = 612852475143;
long int p = 2;

while (n != p)
{
while ((n % p) == 0)
n = (n / p);
p++;
}
printf("%ld\n", n);
return (0);
}
