#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct format
{
	char *op;
	void (*f)(va_list);
} Tformat;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printC(va_list c);
void printI(va_list i);
void printF(va_list f);
void printS(va_list s);

#endif /* MAIN_H */
