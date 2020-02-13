#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - shows the int is a digit
 * @c: - character to execute
 * Return: 1 - gives a digit
 *
 */

int _isdigit(int c)

{
	if (c < 58)
	{
		if (c > 47)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
