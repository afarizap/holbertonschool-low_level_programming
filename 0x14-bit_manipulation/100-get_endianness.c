#include <stdint.h>
#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: allwas 0
 */
int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	if (p[0] == 1)
		return (1);
	else
		return (0);
}
