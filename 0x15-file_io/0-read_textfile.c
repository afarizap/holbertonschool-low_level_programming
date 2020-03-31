#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the input file.
 * @letters: number of letters to print
 * Return: returns write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *poem = malloc(letters);

	if (poem == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(poem);
		return (0);
	}
	r = read(fd, poem, letters);
	if (r == -1)
	{
		free(poem);
		return (0);
	}
	w = write(STDOUT_FILENO, poem, r);
	if (w == -1)
	{
		free(poem);
		return (0);
	}
	free(poem);
	close(fd);
	return (w);
}
