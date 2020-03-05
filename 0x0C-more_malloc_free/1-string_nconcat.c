#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0;
	char *s;
	unsigned int b = 0;
	int a2 = 0;
	unsigned int b2 = 0;
	int ab = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (; s1[a] != '\0'; a++)
		;
	for (; s2[b] != '\0'; b++)
		;
	if (n >= b)
	{
		ab = a + b + 1;
		s = malloc(sizeof(char) * ab);
		if (!s)
			return (NULL);
		for (; a2 < a; a2++)
			s[a2] = s1[a2];
		for (; b2 < b; b2++)
			s[a2 + b2] = s2[b2];
		s[a2 + b2] = '\0';
		if (s == NULL)
			return (NULL);
	}
	if (n < b)
	{
		ab = a + n + 1;
		s = malloc(sizeof(char) * ab);
		if (!s)
			return (NULL);
		for (; a2 < a; a2++)
			s[a2] = s1[a2];
		for (; b2 < n; b2++)
			s[a2 + b2] = s2[b2];
		s[a2 + b2] = '\0';
		if (s == NULL)
			return (NULL);
	}
	return (s);
}
