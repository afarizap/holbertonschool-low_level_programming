#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: prefix.
 * Return: n.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int n;

	for (a = 0; accept[a] != '\0'; a++)
	{
		if (accept[a] != ' ')
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[b] == accept[a])
				n++;
		}
	}
	return (n);
}
