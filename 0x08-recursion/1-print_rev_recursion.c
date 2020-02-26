#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string recursively.
 *@s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
