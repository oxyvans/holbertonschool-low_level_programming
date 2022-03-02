#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - main
 * @size : size
 * @c : char
 * Return: chars
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
		return (NULL);

	res = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
		res[i] = c;
	}

	return (res);
}
