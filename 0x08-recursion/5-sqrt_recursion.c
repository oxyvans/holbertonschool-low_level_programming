#include "main.h"

/**
 * aux - main
 * @n : int
 * @i : int
 * @original : origin
 * Return: int
 */


int aux(int n, int i, int original)
{
if (n == 1)
	return (1);
if (n % 2 != 0)
	n = original - 1;
i = n / 2;
if ((i *i) == original)
	return (i);
return (aux(n - 2, i, original));
}

/**
 * _sqrt_recursion - main
 * @n : int
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (aux(n, n, n));
}
