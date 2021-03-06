#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = 0;

	while (n > c)
	{
		n--;
		b = a[n];
		a[n] = a[c];
		a[c] = b;
		c++;
	}
}
