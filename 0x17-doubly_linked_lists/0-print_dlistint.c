#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while((*h).next != NULL)
	{
		if ((*h).n)
			printf("%d\n", (*h).n);
		h = (*h).next;
		i++;
	}
	return (i);
}
