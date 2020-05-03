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
	dlistint_t *new = NULL, *aux = NULL;

	new = malloc(sizeof(dlistint_t));
	aux = *h;
	(*new).n = n;
	if (idx == 0)
	{
		(*new).next = aux;
		(*aux).prev = new;
		*h = new;
		return (new);
	}
	for (; idx > 1; idx--)
	{
		if (!(*aux).next)
		{
			idx--;
			if (idx > 1)
			{
				free(new);
				return (NULL);
			}
			else
				break;
		}
		aux = (*aux).next;
		if (!aux)
			return (NULL);
	}
	(*new).next = (*aux).next;
	(*new).prev = aux;
	(*aux).next = new;
	aux = (*aux).next;
	aux = (*aux).next;
	(*aux).prev = new;
	aux = NULL;
	return (new);
}
