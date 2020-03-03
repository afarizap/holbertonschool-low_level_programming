#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings into one and asign memory.
 *@s1: string 1
 *@s2: string 2
 * Return: retunr concatenated strings or null.
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	char *s;
	int b = 0;
	int a2 = 0;
	int b2 = 0;
	int ab = 0;
	char *z = "";

	if (s1 == NULL)
	{
		s1 = z;
	}
	if (s2 == NULL)
	{
		s1 = z;
	}
	for (; s1[a] != '\0'; a++)
	{
	}
	for (; s2[b] != '\0'; b++)
	{
	}
	ab = a + b + 1;
	s = malloc(sizeof(char) * ab);

	if (s == NULL)
		return (NULL);

	for (; a2 < a; a2++)
		s[a2] = s1[a2];
	for (; b2 < b; b2++)
		s[a2 + b2] = s2[b2];
	s[a2 + b2] = '\0';
	if (s == NULL)
		return (NULL);

	return (s);
}
