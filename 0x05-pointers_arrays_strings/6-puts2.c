#include "holberton.h"

/**
 * puts2 - putchar a string with 1 memory of distance.
 *
 *@str: string
 */
void puts2(char *str)
{
	int w = 0;

	while (str[w] != '\0')
	{
		_putchar(str[w]);
		w++;
		w++;
	}
	_putchar('\n');
}
