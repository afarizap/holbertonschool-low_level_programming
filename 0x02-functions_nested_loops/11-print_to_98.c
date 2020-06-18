#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: given number
 */
void print_to_98(int n)
{
	float y;

	while (n != 98)
	{
		if (n < 0)
			_putchar('-');
		if (n < 0)
			y = -n;
		else
			y = n;
		if (y >= 100)
		{
			y /= 100;
			_putchar((int)y % 10 + '0');
			y *= 100;
		}
		if (y >= 10)
		{
			y /= 10;
			_putchar((int)y % 10 + '0');
			y *= 10;
		}
		_putchar((int)y % 10 + '0');
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
