#include "main.h"

/**
 * aux - main
 * @n : int
 * @i : int
 * Return: int
 */

int aux(int n, int i)
{
if (i > n / 2)
	return (1);
if (n % i == 0)
	return (0);
return (aux(n, i + 1));
}

/**
 * is_prime_number - main
 * @n : int
 * Return: int
 */

int is_prime_number(int n)
{
if (n < 1)
	return (0);
if (n == 1)
	return (0);
return (aux(n, 2));
}
