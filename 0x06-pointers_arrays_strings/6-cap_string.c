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
		    '.', ';', ',', ' ', '\t', '\n'};

	for (c = 0; x[c] != '\0'; c++)
	{
		for (g = 0; g < 13; g++)
		{
			if (z[g] == x[c])
			{
				if (x[c + 1] > 'a' && x[c + 1] < 'z')
				{
					x[c + 1] -= 32;
				}
				if (x[c] == '\t')
				{
					x[c] = ' ';
				}
			}
			if (x[c] == x[0] && x[c] > 'a' && x[c] < 'z')
			{
				x[c] -= 32;
			}
		}
	}
	return (x);
}
