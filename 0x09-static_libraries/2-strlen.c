#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - measure the lenght of a loop.
 *
 * @s : string pointer array
 *Return: gives c value
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
