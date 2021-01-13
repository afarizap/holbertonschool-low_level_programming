#include "search_algos.h"

/**
 * binary_search - searches a value in sorted array of int using bs algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where value is located or -1 if NULL or not present
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m, i;

	if (!array)
		return (-1);

	while (1)
	{
		printf("Searching in array:");
		for (i = l; i < r; i++)
			printf(" %i,", array[i]);
		printf(" %i\n", array[i]);

		m = (l + r) / 2;

		if (array[m] < value)
			l = m + 1;
		if (array[m] > value)
			r = m - 1;
		if (array[m] == value)
			return (m);
		if (r == m || l == m)
			return (-1);
	}
	return (-1);
}
