#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if ((*h).prev != NULL)
	{
		while ((*h).prev)
		{
			printf("%d\n", (*h).n);
			h = (*h).prev;
			i++;
		}
		printf("%d\n", (*h).n);
	}
	else if ((*h).next != NULL)
	{
		while ((*h).next)
		{
			printf("%d\n", (*h).n);
			h = (*h).next;
			i++;
		}
		printf("%d\n", (*h).n);
	}
	else
	{
		if ((*h).n)
		{
			printf("%d\n", (*h).n);
			i++;
		}
	}
	return (i);
}
