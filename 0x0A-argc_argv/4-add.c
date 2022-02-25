#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc : size
 * @argv : char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i;
int j;
int res = 0;

if (argc > 0)
{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
}
printf("%d\n", res);
return (0);
}
