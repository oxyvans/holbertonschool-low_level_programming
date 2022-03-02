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
	int i = 1, len = 0, j;
	char *res;

	if (ac == 0 || *av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
		len += (strlen(av[j]) + 1);

	res = malloc((len + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);

	res[0] = *av[0];
	while (i <= len)
	{
		if (i % 2 == 0)
			res[i] = '\n';
		res[i] = *av[i];
		i++;
	}
	return (res);
}
