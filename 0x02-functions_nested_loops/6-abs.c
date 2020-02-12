#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > '0')
	{
	return (1);
	}
	else if (c > 96)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
	return (0);
}
