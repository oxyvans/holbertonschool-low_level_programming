#include "main.h"

/**
 * factorial - main
 * @n : int
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
