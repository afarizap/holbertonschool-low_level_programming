#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - copy a string into another string.
 * @dest: string that allocates the cat
 * @src: string that have to be coppied into dest
 * @n: max len of string catted.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int m = 0;

	while (c < n && src[c] != '\0')
	{
		c++;
	}
	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
