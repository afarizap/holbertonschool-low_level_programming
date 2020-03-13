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
	va_list numeros;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start (numeros, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numeros, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end (numeros);
}
