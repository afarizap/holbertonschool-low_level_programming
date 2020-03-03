#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of a size and filled with char c
 * @size: size of the string
 * @c: character in the string
 * Return: string s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (; i < size; i++)
		s[i] = c;
	return (s);
}
