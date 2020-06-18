#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: given number
 */

void print_to_98(int n)
{
	int x = 0, y = 0;

	while (n != 98)
	{
		y = n;
		if (n < 0)
			_putchar('-');
		while (abs(y) > 9)
		{
			for (x = y; abs(x) > 9;)
				x = abs(x) / 10;
			_putchar(x + 48);
			y /= 10;
		}
		_putchar(abs(n) % 10 + '0');
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n += 1;
		else
			n -= 1;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
