#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: string to prit
 * @needle: string to get
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (!*needle)
		return (haystack);
	while (haystack)
	{
		while (haystack[a] == needle[a])
			a++;
		if (needle[a] == '\0')
			return (haystack);
		a = 0;
		haystack++;
	}
	return (NULL);
}
