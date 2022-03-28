#include "main.h"

/**
 * create_file - main
 * @filename: char
 * @text_content: size
 * Return: int
 **/

int create_file(const char *filename, char *text_content)
{
	ssize_t o, fd, i = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i] != '\0')
		i++;

	o = write(fd, text_content, i);

	if (o != i)
		return (0);

	return (1);

}
