#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - main
 * @str : chars
 * Return: chars
 */

char *_strdup(char *str)
{
	char *res;
	int i;
	int size = 0;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	size++;
	res = malloc(size * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		res[i] = str[i];
	}
	return (res);

}
