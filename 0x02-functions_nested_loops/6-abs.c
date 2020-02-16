#include "holberton.h"
#include <stdio.h>

/**
 *_abs - function to get value from numbers.
 *@c: variable 1
 *
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (c);
	}
	else
	{
		return (-c);
	}
	return (0);
}
