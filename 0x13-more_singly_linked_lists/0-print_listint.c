#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int n;
	while (h)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		n++;
	}
	return(n);
}
