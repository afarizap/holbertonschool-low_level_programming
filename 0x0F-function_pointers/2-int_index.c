#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: of the array
 * @cmp: function that check if ~
 * Return: return null if null, i if match, -1 else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	return (-1);
}
