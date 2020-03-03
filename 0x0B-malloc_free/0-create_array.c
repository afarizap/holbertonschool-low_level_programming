#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s[size];

	if (size == 0)
		return ('\0');
	else
		for (i = 0; i < size; i++)
			s[i] = c;
	return (s);
}
