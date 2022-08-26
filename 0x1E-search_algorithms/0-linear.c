#include "search_algos.h"

/**
 * linear_search - main
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}
	return (-1);
}
