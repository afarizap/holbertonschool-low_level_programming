#include <stdio.h>
#include "holberton.h"

/**
 * *_strchr -  locates a character in a string
 * @s: string
 * @c: character
 * Return: the string
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != c && s[count] != '\0'; count++)
	{
	}
	if (s[count] == c)
	{
		s = &s[count];
		return (s);
	}
	else
		return (0);
}
