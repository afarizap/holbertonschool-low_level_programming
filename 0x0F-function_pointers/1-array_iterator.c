#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates an array of integers
 * @array: array of integers
 * @size: size of the array
 * @action: function name
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
