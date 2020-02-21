#include "holberton.h"
#include <stdio.h>
/**
 * *rot13 - root13
 * @x: string to make uppercase
 * Return: variable x
 */
char *rot13(char *x)
{
	int m;
	int c = 0;
	char l[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char n[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (x[c] != '\0')
	{
		for (m = 0; m < 52; m++)
		{
			if (x[c] == l[m])
			{
				x[c] = n[m];
				break;
			}
		}
		c++;
	}
	return (x);
}
