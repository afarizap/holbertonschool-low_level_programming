#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bitted number
 * @index: starting from 0 of th ebit you want to get
 * Return: 1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	i <<= index;
	*n |= i;
	return (*n);
}
