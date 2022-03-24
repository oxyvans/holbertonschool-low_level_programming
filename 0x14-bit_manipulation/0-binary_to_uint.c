#include "main.h"

/**
 * binary_to_uint - main
 * @b: list.
 *
 * Return: decimal.
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res <<= 1;
		res = res + (b[i] - '0');
	}

	return (res);
}
