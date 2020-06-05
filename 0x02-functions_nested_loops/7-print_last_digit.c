#include "holberton.h"

/**
 * print_last_digit - function to print last digit of a number.
 * @c: number
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	int lastdigit;

	if (c == INT_MIN)
		c = 8;
	lastdigit = abs(c) % 10;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
