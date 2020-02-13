#include <stdio.h>
#include "holberton.h"
/**
 *more_numbers - print numbers from 0 to 9
 *
 *
 *
 *
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
		}
		_putchar('\n');
	}
}
