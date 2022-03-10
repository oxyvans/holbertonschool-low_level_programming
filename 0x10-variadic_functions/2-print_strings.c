#include "variadic_functions.h"

/**
 * print_strings - print
 * @separator : separador
 * @n : int
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list aux;
	unsigned int i;
	char *chars;

	va_start(aux, n);

	for (i = 0; i < n; i++)
	{
		chars = va_arg(aux, char *);

		if (chars != NULL)
			printf("%s", chars);
		else
			printf("(nil)");

		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}

	va_end(aux);
	printf("\n");
}
