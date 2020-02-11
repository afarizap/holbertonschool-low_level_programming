#include "holberton.h"
#include <stdio.h>
/**
 * _isalpha - return 1 if alphanumeric
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c < 123)
	{
		if (c > 96)
		{
			return (1);
		}
	}
	else if (c < 91)
	{
		if (c > 64)
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
