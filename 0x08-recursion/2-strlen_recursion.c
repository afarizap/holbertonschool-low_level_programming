#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - number of characters on string recursively.
 * @s: string
 * Return: 0 or function.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}
