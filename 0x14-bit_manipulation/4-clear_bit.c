#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: bitted number
 * @index: starting from 0 of th ebit you want to get
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 32)
		return (-1);
	i <<= index;
	i = ~i;
	*n &= i;
	return (1);
}
