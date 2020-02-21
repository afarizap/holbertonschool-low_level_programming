#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - make lowercase to upercase on a string
 * @x: string to make uppercase
 * Return: variable x
 */
char *cap_string(char *x)
{
	int c;
	int g;
	char z[] = {'}', '{', ')', '(', '"', '?', '!',
		    '.', ';', ',', ' ', '\t', '\n', '\0'};

	for (c = 0; x[c] != '\0'; c++)
	{
		for (g = 0; g < 13; g++)
		{
			if (z[g] == x[c])
			{
				if (x[c - 1] >= 97 && x[c - 1] <= 122)
				{
					x[c] -= 32;
				}
			}
		}
	}
	return (x);
}
