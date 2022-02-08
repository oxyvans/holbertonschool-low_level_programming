#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int i = 1;
long int anterior = 0;
long int aux = 0;
long int res = 0;
int cont = 1;
for (cont = 0; cont <= 40 ; cont++)
{
aux = i + anterior;
anterior = i;
i = aux;
if (aux < 4000000)
{
if (aux % 2 == 0)
{
res = res + aux;
}
}
}
printf("%ld\n", res);
return (0);
}
