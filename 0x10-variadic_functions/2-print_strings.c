#include "variadic_functions.h"

/**
 * print_strings - print
 * @separator : separador
 * @n : int
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list aux;
	unsigned int i = 0;
	char *chars;

	if (separator != NULL)
	{
		va_start(aux, n);

		for (i = 0; i < n; i++)
		{
			chars = va_arg(aux, char *);

			if (i != n - 1)
				if (chars != NULL)
					printf("%s%s", chars, separator);
				else
					 printf("(nil)%s", separator);
			else
				if (chars != NULL)
					printf("%s\n", chars);
				else
					printf("(nil)\n");
		}
	}
	va_end(aux);
}
