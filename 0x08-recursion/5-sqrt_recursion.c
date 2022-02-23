#include "main.h"

/**
 * aux - main
 * @n : int
 * @r : int
 * @rx2 : origin
 * Return: int
 */


int aux(int n, int r, int rx2)
{
if (n == rx2)
	return (r);
if (n > (rx2 / 2))
{
	r = r + 1;
	return (aux(n, r, r * r));
}
return (-1);
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
return (aux(n, 0, 0));
}
