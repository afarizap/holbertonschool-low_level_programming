#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list palabras;
	unsigned int t;
	char *p;

	if (!separator)
		return;
	va_start (palabras, n);
	for (t = 0; t < n; t++)
	{
		p = va_arg (palabras, char *);
		if (palabras == NULL)
			printf ("%p", p);
		else
			printf ("%s", p);
		if (t != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end (palabras);
}
