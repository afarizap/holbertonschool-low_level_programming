#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - copy a string into another string.
 * @dest: string that allocates the cat
 * @src: string that have to be coppied into dest
 * @n: max len of string catted.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int m = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (m < n && src[m] != '\0')
	{
		dest[c] = src[m];
		m++;
		c++;
	}
	return (dest);
}
