#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: num
 * Return: sum
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list aux;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(aux, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(aux, int);
	}

	va_end(aux);
	return (sum);
}
