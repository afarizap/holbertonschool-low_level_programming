#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: , and space
 * @n: number of listed files
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i;

	va_start(numeros, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numeros, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numeros);
}
