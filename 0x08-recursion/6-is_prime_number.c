#include "holberton.h"
#include <stdio.h>

/**
 * _primenum - power of x times y with recursion.
 *@n: number
 *@m: counter
 * Return: power of the number or -1 if negative.
 */

int _primenum(int n, int m)
{
	if (n < 2)
		return (0);
	if (n == m)
		return (1);
	if (n % m == 0)
		return (0);
	else
		return (_primenum(n, m + 1));
}
/**
 * is_prime_number - recursive numbers
 *@n: asdasd
 * Return: _primenum
 */
int is_prime_number(int n)
{
	return (_primenum(n, 2));
}
