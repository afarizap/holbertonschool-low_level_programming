#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - gives error if null and size
 * @b: size of memory
 *Return: string or exit 98
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(char) * b);
	if (s == NULL)
		exit(98);
	return (s);
}
