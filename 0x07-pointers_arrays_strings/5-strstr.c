#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - check the code for Holberton School students.
 *@haystack:
 *@needle:
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
			if (haystack[a] == needle[b])
			{
				if (haystack[a - 1] == needle[b])
					break;
				else
				haystack = &haystack[a];
			}
	}
	return (haystack);
}
