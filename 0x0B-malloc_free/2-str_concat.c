#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - main
 * @s2 : size
 * @s1 : char
 * Return: chars
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, j, size1 = 0, size2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	res = malloc((size1 + size2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < size2; i++, j++)
	{
		res[i] = s2[j];
	}
	return (res);
}
