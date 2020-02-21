#include "holberton.h"
#include <stdio.h>
/**
 * *leet - make lowercase to upercase on a string
 * @x: string to make uppercase
 * Return: variable x
 */
char *leet(char *x)
{
	int m;
	int c = 0;
	int l[] = {'a','A','e','E','o','O','t','T','l','L'};
	int n[] = {'4','4','3','3','0','0','7','7','1','1'};

	while (x[c] != '\0')
	{
		for (m = 0; m < 10; m++)
		{
			if (x[c] == l[m])
			{
				x[c] = n[(m)];
			}
		}
		c++;
	}
	return (x);
}
