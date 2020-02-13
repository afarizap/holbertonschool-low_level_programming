#include <stdio.h>
#include "holberton.h"
/**
 * print_line - prints a number of lines if positive number.
 * @n: number of times line is printed
 */

void print_line(int n)
{
	int l;

		for (l = 0; l < n; l++)
		{
			if (n > 0)
			{
				_putchar ('_');
			}
		}
		_putchar ('\n');
}
