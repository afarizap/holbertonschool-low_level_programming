#include "search_algos.h"

/**
 * linear_search - searches a value in an array of int using the ls algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1 if something happen
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!value)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
