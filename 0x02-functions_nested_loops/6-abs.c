#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * abs- function to get absolute value from numbers.
 *@c: variable 1
 *
 * * Return: Always 0.
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
