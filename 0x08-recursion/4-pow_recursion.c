#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - power of x times y with recursion.
 *@x: number
 *@y: power of the number
 * Return: power of the number or -1 if negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
