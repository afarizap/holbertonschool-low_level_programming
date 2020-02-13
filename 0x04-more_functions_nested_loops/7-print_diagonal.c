#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - prints a number of diagonals if positive number.
 * @n: number of times line is printed
 */

void print_diagonal(int n)
{
	int l;
	int i;

	for (l = 0; l < n; l++)
	{
		for (i = 1; i <= l; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
