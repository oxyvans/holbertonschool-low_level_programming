#include "main.h"

/**
* main - main
* @argc: int
* @argv: char
* Return: 0
*/

int main(int argc, char *argv[])
{
	*argv = *argv;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "stderr\n");
		exit(98);
	}
	return (0);
}
