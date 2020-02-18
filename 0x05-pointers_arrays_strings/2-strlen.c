#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 *
 * @s : Variable
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
