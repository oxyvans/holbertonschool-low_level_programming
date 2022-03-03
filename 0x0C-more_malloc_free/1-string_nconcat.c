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
	unsigned int i = 0, j, s1_len, s2_len;
	char *aux;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n < s2_len + 1)
		aux = malloc(sizeof(char) * (s1_len + n + 1));
	else
		aux = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (aux == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			aux[i] = s1[i];
	if (s2 != NULL)
	{
		if (n < s2_len)
			for (j = 0; j < n; j++, i++)
				aux[i] = s2[j];
		else
			for (j = 0; s2[j] != '\0'; j++, i++)
				aux[i] = s2[j];
	}
	aux[i] = '\0';
	return (aux);
}
