#include "holberton.h"

/**
 * puts_half - putchar a string with 1 memory of distance.
 *
 *@str: string
 */
void puts_half(char *str)
{
	int w = 0;
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	x--;
	if (x % 2 == 0)
	{
		w = x / 2;
	}
	else
	{
		w = (x - 1) / 2;
	}
	while (str[w] != '\0')
	{
		w++;
		_putchar(str[w]);
	}
	_putchar('\n');
}
