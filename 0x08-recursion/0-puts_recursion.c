#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string recursively.
 *@s: string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	if (*s == '\0')
		_putchar('\n');
}
