#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - main
 * @width : int
 * @height : int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int w, i;
	int **res;

	if ((width < 0) || (height < 0))
		return (NULL);

	res = malloc(height * sizeof(int *));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		res[i] = malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			return (NULL);
		}
		else
		{
			for (w = 0; w < width; w++)
			{
				res[i][w] = 0;
			}
		}
	}
	return (res);
}
