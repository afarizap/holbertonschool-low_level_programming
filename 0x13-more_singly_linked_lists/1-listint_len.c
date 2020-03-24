#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer h
 * Return: n
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = (*h).next;
		n++;
	}
	return (n);
}
