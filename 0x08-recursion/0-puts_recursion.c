#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string recursively.
 *@s: string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	if (*s == '\0')
		_putchar('\n');
}
