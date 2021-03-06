#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer
 * Return: int n.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		n++;
	}
	return (n);
}
