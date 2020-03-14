#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list palabras;
	unsigned int t;
	char *p;

	va_start(palabras, n);
	for (t = 0; t < n; t++)
	{
		p = va_arg(palabras, char *);
		if (palabras == NULL)
			puts("(nil)");
		if (t != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(palabras);
}
