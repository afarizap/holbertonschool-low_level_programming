#include "holberton.h"

/**
 * create_file - Create a function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 success, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, a = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
	if (text_content)
	{
		while (text_content[a])
			a++;
		w = write(fd, text_content, a);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
