#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	if (separator == NULL)
		return;
	va_start (ap, n);
	num = 0;
	for (i = 0; i < n; i++)
	{
		num = separator[i];
		printf("%d", num);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
	va_end (ap);
}
