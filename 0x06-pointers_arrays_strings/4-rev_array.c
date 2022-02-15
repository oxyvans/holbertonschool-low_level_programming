#include "main.h"

/**
 * reverse_array - reverse
 * @a : int
 * @n : int
 *
 *
 */

void reverse_array(int *a, int n)
{
int i, j = (n - 1), aux;

	for (i = 0; i < j; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
