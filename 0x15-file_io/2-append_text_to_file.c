#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: -1 if fail, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, a = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
