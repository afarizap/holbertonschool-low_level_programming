#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, m;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	for (m = 1; i > -1; i--, m *= 2)
	{
		if (b[i] == '1')
		{
			sum += m;
			continue;
		}
		if (b[i] == '0')
			continue;
		else
			return (0);
	}
	return (sum);
}
