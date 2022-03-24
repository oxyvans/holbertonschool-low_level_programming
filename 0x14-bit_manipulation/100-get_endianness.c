#include "main.h"

/**
 * get_endianness - main
 *
 * Return: int
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return ((int) (((char *)&x)[0]));
}
