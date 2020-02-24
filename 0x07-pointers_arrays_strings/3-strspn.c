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

	for (a = 0; s[a] != '\0' && s[a] != ' '; a++)
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				n++;
			}
		}
	return (n);
}
