#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null if negative or fail, else grid.
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int y = 0;
	int x = 0;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (; y < height; y++)
	{
		s[y] = malloc(sizeof(int) * width);
		if (s[y] == NULL)
		{
			for (; s[x]; x++)
				free(s[x]);
			free(s);
			return (NULL);
		}
	}
	y = 0;
	x = 0;

	for (; y < height; y++)
	{
		for (; x < width; x++)
			s[y][x] = 0;
	}
	return (s);
}
