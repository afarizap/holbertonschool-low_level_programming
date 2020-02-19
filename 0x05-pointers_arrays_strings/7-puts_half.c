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
		x++;
	if (x % 2 == 0)
		w = x / 2;
	if (x % 2 == 1)
		w = (x - 1) / 2;
	while (str[w] != '\0')
		if (w != 0)
		{
			_putchar(str[w]);
			w++;
		}
		else
			w++;
	_putchar('\n');
}
