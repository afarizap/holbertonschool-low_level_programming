#include "holberton.h"
#include <stdio.h>

/**
 *print_last_digit - function to print last digit of a number.
 *
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	c = c % 10;
	printf("%d", c);
	return (c);
}
