#include "variadic_functions.h"

/**
 * printC - print c
 * @c : char
 *
 */

void printC(char c)
{
	printf("%c", c);
}

/**
 * printI - print i
 * @i : int
 *
 */

void printI(int i)
{
	printf("%d", i);
}

/**
 * printF - print f
 * @f : float
 *
 */

void printF(double f)
{
	printf("%f", f);
}

/**
 * printS - print s
 * @s : string
 *
 */

void printS(char *s)
{
	if (s == NULL)
		printf("(nul)");
	else
		printf("%s", str);
}

/**
 * print_strings - print
 * @separator : separador
 * @n : int
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

}
