#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, unsigned int);

	va_end (ap);
	return sum;
}
