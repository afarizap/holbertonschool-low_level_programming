#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - malloc with 0 assigned.
 * @nmemb: number of memory in bytes
 * @size: the size of the memory
 * Return: string or null if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x = 0;

	s = malloc(nmemb * size + 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (; x < size; x++)
			s[x] = 0;
	return (s);
}
