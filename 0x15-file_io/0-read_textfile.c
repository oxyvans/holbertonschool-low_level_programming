#include "main.h"

/**
 * read_textfile - main
 * @filename: char
 * @letters: size
 * Return: ssize
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t o, fd, i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	i = read(fd, buf, letters);

	if (i == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	o = write(STDOUT_FILENO, buf, i);
	free(buf);
	close(fd);

	if (o != i)
		return (0);

	return (o);

}
