#include "holberton.h"

/**
 * print_last_digit - function to print last digit of a number.
 * @c: number
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	unsigned int lastdigit;

	if (c < 0)
		c = -c;
	lastdigit = (unsigned int)c % 10;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
