#include "main.h"

/**
 * get_bit - main
 * @n: list.
 * @index: index
 *
 * Return: int
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
