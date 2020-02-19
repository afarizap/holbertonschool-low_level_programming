#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print an arrray with commas and spaces.
 *@a : array
 *@n : number of elements to be printed
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d, ", a[x]);
		x++;
		if (x < n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
