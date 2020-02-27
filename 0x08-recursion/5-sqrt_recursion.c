#include "holberton.h"
#include <stdio.h>

/**
 * _square_recursion - power of x times y with recursion.
 * _sqrt_recursion - asdasdsa
 *@n: number
 *@m: counter
 * Return: power of the number or -1 if negative.
 */

int _square_recursion(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	if (m * m == n)
		return (m);
	if (m * m <= n)
		return (_square_recursion(n, ++m));
	else
		return (-1);
	return (0);
}
/**
 * _sqrt_recursion - asdasdsa
 *@n: asdasd
 * Return: asdsa
 */
int _sqrt_recursion(int n)
{
	int m = 1;

	return (_square_recursion(n, m));
}
