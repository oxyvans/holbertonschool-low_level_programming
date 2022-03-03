#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - main
 * @ptr : int
 * @old_size : int
 * @new_size : int
 * Return: array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrNew;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
		return (NULL);
	}

	if (old_size >= new_size)
		return (ptr);

	ptrNew = malloc(new_size);

	if (ptrNew == NULL)
		return (NULL);

	memcpy(ptrNew, ptr, old_size);
	free(ptr);
	return (ptrNew);
}
