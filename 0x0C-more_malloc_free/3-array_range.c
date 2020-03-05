#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: min number
 * @max: max number
 * Return: string.
 */
int *array_range(int min, int max)
{
	int *s, a, x = 0;

	if (min > max)
		return (NULL);
	a = max - min;
	s = malloc((a + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (; min <= max; x++, min++)
		s[x] = min;
	return (s);
}
