#include "holberton.h"
#include <stdio.h>
/**
 * _islower - return 1 if lowercase
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c < 123)
	{
		if (c > 96)
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
