#include "holberton.h"

/**
 * *string_toupper - make lowercase to upercase on a string
 * @x: string to make uppercase
 * Return: variable x
 */
char *string_toupper(char *x)
{
	int c = 0;

	while (x[c] != '\0')
	{
		if (x[c] < 123 && x[c] > 96)
		{
			x[c] -= 32;
		}
		c++;
	}
	return (x);
}
