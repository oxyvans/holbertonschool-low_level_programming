#include "main.h"

/**
 * print_diagsums - main
 * @a : pointer
 * @size : int
 */
void print_diagsums(int *a, int size)
{
int i, suma = 0;
for (i = 0: i < size); i++)
{
	suma = suma + a[i][i];
}
return (suma);
}
