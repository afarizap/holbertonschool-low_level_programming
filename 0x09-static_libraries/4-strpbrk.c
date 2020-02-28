#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - string from match with accept.
 *@s: string
 *@accept: input to match
 * Return: string from match.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
			{
				return (s + a);
			}
	}
	return (0);
}
