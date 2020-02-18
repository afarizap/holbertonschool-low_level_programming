#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print the string in reverse.
 *
 * @s : string pointer array
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c > 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
