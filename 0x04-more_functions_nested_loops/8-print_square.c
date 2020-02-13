#include <stdio.h>
#include "holberton.h"
/**
 * print_square - prints a square of diagonals if positive number with numerals
 * @size: side of the square
 */

void print_square(int size)
{
	int l;
	int i;

	for (l = 0; l < size; l++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
