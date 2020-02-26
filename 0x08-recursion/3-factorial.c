#include "holberton.h"
#include <stdio.h>

/**
 * factorial - factorial ! of a number.
 *@n: number
 * Return: factorial or -1 if n<0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
