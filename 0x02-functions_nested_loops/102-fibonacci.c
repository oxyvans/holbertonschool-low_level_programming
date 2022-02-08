#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int i = 1;
long int anterior = 1;
long int aux;
int cont = 1;
printf("%ld, ", i);
i = 2;
while (cont < 49)
{
printf("%ld, ", i);
aux = i;
i = i + anterior;
anterior = aux;
cont++;
}
printf("%ld\n", i);
return (0);
}
