#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of his function
 * @argc: int
 * @argv: chars
 * Return: O
 */

int main(int argc, char *argv[])
{
	char *p_main;
	int bytes, i = 0i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p_main = (char *)&main;
	bytes = atoi(argv[1]);

	while (i < bytes)
	{
		if (i != bytes - 1)
			printf("%02hhx ", p_main[i]);
		else
			printf("%02hhx\n", p_main[i]);
		i++;
	}

	return (0);
}
