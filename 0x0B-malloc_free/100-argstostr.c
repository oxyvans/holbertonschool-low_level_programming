#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - main
 * @ac : int
 * @av : int
 * Return: chars
 */

char *argstostr(int ac, char **av)
{
	int i = 1;
	char *res;

	if (ac == 0 || *av == NULL)
		return (NULL);

	res = malloc(((ac * 2) - 1) * sizeof(char));

	if (res == NULL)
		return (NULL);

	res[0] = *av[0];
	while (i <= ((ac * 2) - 1))
	{
		if (i % 2 == 0)
			res[i] = '\n';
		res[i] = *av[i];
		i++;
	}
	return (res);
}
