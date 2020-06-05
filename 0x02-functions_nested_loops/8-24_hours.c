#include "holberton.h"
/**
 * jack_bauer - print every minute of the day of Jack Bauer 00:00 - 23:59
 */
void jack_bauer(void)
{
	char m1 = '0', m2 = '0', h1 = '0', h2 = '0';

	for (; h1 < '4' || h2 < '2'; m1++)
	{
		if (m1 > '9')
			m1 = '0', m2 += 1;
		if (m2 == '6')
			m2 = '0', h1 += 1;
		if (h1 > '9')
			h1 = '0', h2 += 1;
		if (h1 == '4' && h2 == '2')
			break;
		_putchar(h2);
		_putchar(h1);
		_putchar(':');
		_putchar(m2);
		_putchar(m1);
		_putchar('\n');
	}

}
