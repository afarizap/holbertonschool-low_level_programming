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
	int x = 0;
	int m = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
			{
				x++;
				break;
			}
		if (m == x)
			break;
		else
			m = x;
	}
	return (x);
}
