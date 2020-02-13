#include <stdio.h>
#include "holberton.h"
/**
 * void more_numbers - print numbers from 0 to 9
 *
 * Return: 1 - gives a digit
 *
 *
 */
void more_numbers(void)
{
	int a = '0';
	int b = '0';

	for (a = '0'; a <= '9'; a++)
	{
	       	for (b = '0'; b < '15';b++)
		{
			if (b > '9')
				_putchar(b/10 + 48);
			_putchar(b%10 +48);
		}

		_putchar('\n');
	}
}
