#include "main.h"

/**
 * flip_bits - main
 * @n: num.
 * @m: num
 *
 * Return: int
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int res = 0;

	while (num > 0)
	{
		if (num & 1)
			res++;
		num >>= 1;
	}
	return (res);
}
