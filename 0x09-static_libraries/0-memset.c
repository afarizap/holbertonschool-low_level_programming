#include <stdio.h>
#include "holberton.h"

/**
 * *_memset - put a variable in the memory
 * @s: string
 * @b: times memory should be filled
 * @n: leng string
 * Return: return fixed string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
