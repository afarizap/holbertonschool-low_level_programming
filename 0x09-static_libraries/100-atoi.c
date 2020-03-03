#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int a;

	for (a = 0; s[a] != '\0'; ++a)
		result = result * 10 + s[a] - '0';
	return (result);
}
