#include "main.h"

/**
 * error_ - main
 * @argv1 : char
 * @argv2 : char
 * @r: int
 * @fd_f: int
 * @fd_t: int
 */

void error_(char *argv1, char *argv2, ssize_t r, int fd_f, int fd_t)
{
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv1);
		exit(98);
	}

	if (close(fd_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *argv1);
		exit(100);
	}
	if (close(fd_t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *argv2);
		exit(100);
	}
}

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
	while ((r = read(fd_f, buf, 1024)) > 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd_t, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	error_(argv[1], argv[2], r, fd_f, fd_t);
	return (0);
}
