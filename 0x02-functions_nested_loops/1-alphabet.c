#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet - print alphanbet with putchar and for
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
