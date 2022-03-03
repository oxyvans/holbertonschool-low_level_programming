#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * calloc - main
 * @nmemb : int
 * @size : size
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	for (i = 0; i < ((int)nmemb * (int)size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
