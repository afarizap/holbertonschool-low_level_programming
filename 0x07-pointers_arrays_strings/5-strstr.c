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
	int c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] == needle[b])
			{
				c++;
				break;
			}
			if (needle[b + 1] == '\0')
				c = 0;
		}
	}
	haystack = &haystack[a - c];
	return (haystack);
}
