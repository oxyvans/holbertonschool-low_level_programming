#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 1;
int anterior = 1;
int aux;
int cont = 1;
printf("%d, ", i);
i = 2;
while (cont < 49)
{
printf("%d, ", i);
aux = i;
i = i + anterior;
anterior = aux;
cont++;
}
printf("%d\n", i);
return (0);
}
