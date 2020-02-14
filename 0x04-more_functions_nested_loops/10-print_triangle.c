#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - prints a number triangles if positive number.
 *@size: - number of times line is printed
 */

void print_triangle(int size)
{
	int l;
	int i;
	int c;

	for (l = 0; l < size; l++)
	{
		for (i = 1; i < (size - l); i++)
		{
			_putchar(' ');
		}
		for (c = 0; c <= l; c++)
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
