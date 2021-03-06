#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares the two strings s1 and s2
 * @s1: string 1
 * @s2: string 2
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
