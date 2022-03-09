#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - main
 * @array : ints
 * @size : size
 * @cmp : funcion
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		while (i < size && !cmp(array[i]))
		{
			i++;
		}
		return (i);
	}
}
