#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - main
 * @s1 : size
 * @s2 : char
 * @n : int
 * Return: chars
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, size1 = 0, size2 = 0;
	char *res;

	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);

	if (n < size2 + 1)
		res = malloc(sizeof(char) * (size1 + n + 1));
	else
		res = malloc(sizeof(char) * (size1 + size2 + 1));
	if (res == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			res[i] = s1[i];
	if (s2 != NULL)
	{
		if (n < size2)
			for (j = 0; j < n; j++, i++)
				res[i] = s2[j];
		else
			for (j = 0; s2[j] != '\0'; j++, i++)
				res[i] = s2[j];
	}
	res[i] = '\0';
	return (res);
}
