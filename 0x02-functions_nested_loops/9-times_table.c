#include "holberton.h"
/**
 * times_table - prints formated 9 table
 */
void times_table(void)
{
	int x = 0, y = 0, a, e, d;

	for (; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			d = (x + 1) * y;
			a = x * y;
			if (a > 9)
			{
				e = a % 10;
				a = a / 10;
				_putchar(a + 48);
				_putchar(e + 48);
			}
			else
				_putchar(a + 48);
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (d < 10 && x < 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
