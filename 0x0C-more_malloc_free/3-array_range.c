#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - main
 * @min : int
 * @max : int
 * Return : array 
 */

int *array_range(int min, int max)
{
	int i, j, l;
	int *p;

	if (min > max)
		return (NULL);

	if (min == max)
	{
		p = malloc(1 * sizeof(int));
		if (p == NULL)
			return (NULL);
		p[0] = min;
		return (p);
	}

	l = (max - min);
	p = malloc((l + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		mal[j] = i;
		if (j < l)
		j++;
	}
	return (p);
}
