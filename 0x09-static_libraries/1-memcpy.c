#include <stdio.h>
#include "holberton.h"

/**
 * *_memcpy - copy part of a string in the memory
 * @dest: result
 * @src: string source
 * @n: max number
 * Return: return string coppied in other string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
