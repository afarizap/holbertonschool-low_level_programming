#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns copy of a string.
 * @str: - string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int a = 0;
	char *s;
	int b = 0;

	if (str == NULL)
		return (NULL);
	for (; str[a] != '\0'; a++)
	{
	}
	s = malloc(sizeof(char) * a + 1);
	if (s == NULL)
		return (NULL);
	for (; b < a; b++)
		s[b] = str[b];
	return (s);
}
