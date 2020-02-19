#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - copy a string from one pointer to another var.
 *@dest: where string is copied from src
 *@src: where the string  have to be coppied
 * Return: dest(cpied string)
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
return (dest);
}
