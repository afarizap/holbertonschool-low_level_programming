#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * Return: n
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n;

	while (h)
	{
		h = (*h).next;
		n++;
	}
	return (n);
}
