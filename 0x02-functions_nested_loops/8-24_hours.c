#include "holberton.h"
#include <stdio.h>


void jack_bauer(void)
{
	int hora1 = '0';
	int hora2 = '0';
	int min1 = '0';
	int min2 = '0';

	while (hora1 < '2' || hora2 < '4')
	{
		_putchar(hora1);
		_putchar(hora2);
		_putchar(':');
		_putchar(min1);
		_putchar(min2);
		_putchar('\n');
		if (hora2 == '9' && min1 == '5' && min2 == '9')
		{
			hora1++;
			hora2 = '0';
			min1 = '0';
			min2 = '0';
			_putchar(hora1);
			_putchar(hora2);
			_putchar(':');
			_putchar(min1);
			_putchar(min2);
			_putchar('\n');
		}
		if (min1 == '5' && min2 == '9')
		{
			hora2++;
			min1 = '0';
			min2 = '0';
			if (hora1 != '2' && hora2 != '4')
			{
				_putchar(hora1);
				_putchar(hora2);
				_putchar(':');
				_putchar(min1);
				_putchar(min2);
				_putchar('\n');
			}
		}
		if (min2 == '9')
		{
			min1++;
			min2 = '0';
			_putchar(hora1);
			_putchar(hora2);
			_putchar(':');
			_putchar(min1);
			_putchar(min2);
			_putchar('\n');
		}
		min2++;
	}
}