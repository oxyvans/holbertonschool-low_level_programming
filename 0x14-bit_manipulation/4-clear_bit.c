#include "main.h"

/**
 * clear_bit - main
 * @n: list.
 * @index: index
 *
 * Return: int
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = ~(1 << index);

	if (index > sizeof(n) * 8)
		return (-1);

	*n = b & *n;
	return (1);
}
