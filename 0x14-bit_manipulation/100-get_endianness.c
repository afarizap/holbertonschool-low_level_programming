#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: allwas 0
 */
int get_endianness(void)
{
	union {
		short s;
		char c[sizeof(short)];
	} un;
	un.s = 0x0102;

		if(un.c[0] == 1 && un.c[1] == 2)
			return (0);
		else
			return (1);
}
