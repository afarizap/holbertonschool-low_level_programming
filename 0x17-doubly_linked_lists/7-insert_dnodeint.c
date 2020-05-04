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
	dlistint_t *new = malloc(sizeof(dlistint_t)), *aux = *h;

	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).prev = NULL;
	(*new).next = NULL;
	if (idx == 0)
		if (!*h)
		{
			*h = new;
			return (new);
		}
		else
		{
			(*new).next = *h;
			(*aux).prev = new;
			return (new);
		}
	else
	{
		for (; idx > 0; idx--)
			if ((*aux).next != NULL)
				aux = (*aux).next;
		if (idx != 0)
			return (NULL);
		(*new).prev = aux;
		(*new).next = (*aux).next;
		(*aux).next = new;
		if ((*aux).next == NULL)
			return (new);
		aux = (*aux).next;
		aux = (*aux).next;
		(*aux).prev = new;
		return (new);
	}
}
