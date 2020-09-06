#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the first node of dllist
 * @idx: is the index of the list where the new node should be added
 * @n: number to be asssigned
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	(*new).prev = NULL;


	if (idx == 0)
		if (!*h)
			*h = new;
		else
			(*new).next = *h, (**h).prev = new, *h = new;
	else
	{
		if (idx > 0)
			while ((*aux).next)
				aux = (*aux).next, i--;
		if ((*aux).next)
			(*new).next = NULL;
		(*aux).next = new;
		(*aux).prev = aux;
	}
	return (new);
}
