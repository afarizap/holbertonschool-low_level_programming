#include "holberton.h"
#include <stdio.h>

/**
 * pali - check the code for Holberton School students.
 * @s: string
 * @a: rising
 * @b: down
 * Return: asd.
 */
int pali(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (s[a] != s[b])
		return (0);
	if (a <= b + 1)
		return (pali(s, a + 1, b - 1));
	return (1);

}
/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: string
 * Return: asd.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: string
 * Return: asd.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (pali(s, 0, n - 1));
}
