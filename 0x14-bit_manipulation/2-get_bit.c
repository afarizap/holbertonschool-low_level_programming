#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: bitted number
 * @index: starting from 0 of th ebit you want to get
 * Return: value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 80)
		return (-1);
	n >>= index;
	return (n %= 2);
}
