#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - Swap values from two int variables a and b
 *
 * @a : First variable
 * @b : Second variable
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
