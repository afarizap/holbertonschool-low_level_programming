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
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c3++, c2++)
		{
		}
		c3++;
	}
	s = malloc(sizeof(char) * c3 + 1);
	if (s == NULL)
		return (NULL);
	c3 = 0;
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c3++, c2++)
		{
			s[c3] = av[c1][c2];
		}
		s[c3] = '\n';
		c3++;
	}
	return (s);
}
