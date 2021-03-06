#include "variadic_functions.h"
#include <string.h>

/**
 * printC - print c
 * @c : char
 *
 */

void printC(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * printI - print i
 * @i : int
 *
 */

void printI(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * printF - print f
 * @f : float
 *
 */

void printF(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * printS - print s
 * @s : string
 *
 */

void printS(va_list s)
{
	char *aux = va_arg(s, char *);

	if (aux == NULL)
		aux = "(nil)";
	printf("%s", aux);
}

/**
 * print_all - print
 * @format : format
 *
 **/

void print_all(const char * const format, ...)
{
	Tformat form[] = {
		{"c", printC},
		{"i", printI},
		{"f", printF},
		{"s", printS},
		{NULL, NULL}
	};

	int i = 0, j = 0;
	va_list aux;
	char *sep = "";

	va_start(aux, format);
	while (format != NULL && format[i] != '\0')
	{
		while (form[j].op)
		{
			if (format[i] == *form[j].op)
			{
				printf("%s", sep);
				form[j].f(aux);
				sep = ", ";
				break;
			}

			j++;
		}
		i++;
		j = 0;
	}
	va_end(aux);
	printf("\n");
}
