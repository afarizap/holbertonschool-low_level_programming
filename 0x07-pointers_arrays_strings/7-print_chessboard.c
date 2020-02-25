#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - print the words of chess positions in their position.
 *
 * @a: first array of multiple array
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (c = 0; c < 8; c++)
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
			if (b == 7)
				_putchar('\n');
		}
}
