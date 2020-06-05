#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - function to print last digit of a number.
 * @c: number
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	int lastdigit;

	lastdigit = abs(c) % 10;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
