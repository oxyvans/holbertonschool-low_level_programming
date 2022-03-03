#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - main
 * @s1 : size
 * @s2 : char
 * @n : int
 * Return: chars
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	int i, j, size1 = 0, size2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (s1 != NULL)
	{
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	}
	if (s2 != NULL)
	{
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{	
	}
	}
	if ((int)n < size2)
		size2 = n;

	res = malloc((size1 + size2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; i < size1; i++)
		{
			res[i] = s1[i];
		}
	if (s2 != NULL)
		for (j = 0; j < size2; i++, j++)
		{
			res[i] = s2[j];
		}
	return (res);
}
