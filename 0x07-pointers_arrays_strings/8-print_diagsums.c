#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main
 * @a : pointer
 * @size : int
 */
void print_diagsums(int *a, int size)
{
int i, suma = 0, suma2 = 0;
for (i = 0; i < size; i++)
{
	suma = suma + a[i];
	a = a + size;
}
a = a - size;
for (i = 0; i < size; i++)
{
	suma2 = suma2 + a[i];
	a = a - size;
}
printf("%d ,%d\n", suma, suma2);
}
