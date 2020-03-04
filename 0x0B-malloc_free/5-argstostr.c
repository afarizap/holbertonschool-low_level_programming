#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - check the code for Holberton School students.
 *@ac: asd
 *@av: asd
 * Return: char.
 */
char *argstostr(int ac, char **av)
{
	int w;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
		free(av[w]);
	free(grid);
