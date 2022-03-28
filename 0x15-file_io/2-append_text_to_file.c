#include "main.h"

/**
 * append_text_to_file - main
 * @filename: char
 * @text_content: size
 * Return: int
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, fd, i = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[i] != '\0')
		i++;

	o = write(fd, text_content, i);

	if (o != i)
		close(fd);
		return (0);

	close(fd);
	return (1);

}
