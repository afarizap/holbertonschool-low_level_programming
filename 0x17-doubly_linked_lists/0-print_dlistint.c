#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *aux = h;

	for (; aux; i++)
	{
		printf("%d\n", (*aux).n);
		aux = (*aux).next;
	}
	return (i);
}
