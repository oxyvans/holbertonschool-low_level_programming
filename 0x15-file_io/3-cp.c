#include "main.h"

/**
 * main - main
 * @argc : size
 * @argv : char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int fd_f, fd_t;
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*------------------ create -------------- */

	fd_f = open(argv[1], O_RDONLY);

	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/*------------------ read -------------- */

	while ((r = read(fd_f, buf, 1024)) > 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		/*------------------ write -------------- */

		w = write(fd_t, buf, r);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *argv[1]);
		exit(100);
	}
	if (close(fd_t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *argv[2]);
		exit(100);
	}
	return (0);
}
