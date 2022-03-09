#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - main
 * @name : char
 * @f : char
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
