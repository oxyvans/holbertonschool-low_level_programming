#include "main.h"

/**
* main - main
* @argc: int
* @argv: char
*/

void main(int argc, char *argv[])
{
	*argv = *argv;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "stderr\n");
		exit(98);
	}
}
