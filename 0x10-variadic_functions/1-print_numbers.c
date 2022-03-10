#include "variadic_functions.h"

/**
 * print_numbers - print
 * @separator : separador
 * @n : int
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list aux;
	unsigned int i;

	va_start(aux, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aux, int));

		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}

	va_end(aux);
	printf("\n");
}
