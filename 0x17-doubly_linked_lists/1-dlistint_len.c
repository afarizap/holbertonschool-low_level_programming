#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of dlinked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	for (; h; i++)
		h = (*h).next;
	return (i);
}
