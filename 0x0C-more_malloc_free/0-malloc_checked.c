#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 * malloc_checked - main
 * @b : u int
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
