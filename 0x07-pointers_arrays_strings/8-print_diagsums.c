#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 *@a: array
 *@size: array size
 */
void print_diagsums(int *a, int size)
{
	int count;
	int count2;
	int suma = 0;
	int resta = 0;

	for (count = 0; count < size; count++)
	{
		suma += a[count];
		if (count < (size - 1))
			a = (a + size);
	}
	printf("%d", suma);
	putchar(',');
	putchar(' ');
	for (count2 = 0; count2 < size; count2++)
	{
		resta += a[count2];
		if (count < (size - 1))
			a = (a - size);
	}
	printf("%d", resta);
	putchar('\n');
}
