#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - main
 * @ac : int
 * @av : int
 * Return: chars
 */

char *argstostr(int ac, char **av)
{
	int len = 0, j, i, c = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
		len += ((int)strlen(av[j]) + 1);

	res = malloc((len + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			res[c] = av[i][j];
			j++;
			c++;
		}
		res[c] = '\n';
		c++;
	}
	res[c] = '\0';

	return (res);
}
