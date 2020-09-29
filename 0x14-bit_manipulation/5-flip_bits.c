#include "holberton.h"
/**
 * flip_bits - compare two numbers to see how many bits they have different
 * @n: bitted number 1
 * @m: bitted number 2
 * Return: number of bits needed to convert one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n ^= m;
	while (n > 0)
	{
		if (n % 2 == 1)
			i++;
		n >>= 1;
	}
	return (i);
}
