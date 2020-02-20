#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - copy a string into another string.
 * @dest: string that allocates the cat
 * @src: string that have to be coppied into dest
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int m = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[m] != '\0')
	{
		dest[c] = src[m];
		c++;
		m++;

	}
	return (dest);
}
