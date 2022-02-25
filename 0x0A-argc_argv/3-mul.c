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
if (argc != 3)
	printf("%s\n", "Error");
else
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int res = a * b;

	printf("%d\n", res);
}
return (0);
}
