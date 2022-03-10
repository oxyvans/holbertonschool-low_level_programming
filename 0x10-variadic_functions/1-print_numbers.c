#include "variadic_functions.h"

/**
 * print_numbers - print
 * @separator : separador
 * @n : int
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list aux;
	unsigned int i = 0;

	if (separator != NULL)
	{
		va_start(aux, n);

		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d%s", va_arg(aux, int), separator);
			else
				printf("%d\n", va_arg(aux, int));
		}
	}
	va_end(aux);
}
