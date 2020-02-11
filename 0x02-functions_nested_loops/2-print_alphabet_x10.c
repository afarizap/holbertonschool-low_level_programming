#include "holberton.h"
#include <stdio.h>

void print_alphabet_x10(void)
{
	char c;
	int o;

	for (o = '0'; o <= '9'; o++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
