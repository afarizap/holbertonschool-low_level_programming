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
	dlistint_t *new = NULL, *aux = *h, *aux2 = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	for (; idx > 1; idx--)
	{
		aux = (*aux).next;
		if (!aux)
			return (NULL);
	}
	(*new).n = n;
	(*new).next = (*aux).next;
	(*new).prev = aux;
	aux2 = (*aux).next;
	(*aux).next = new;
	(*aux2).prev = new;
	aux = NULL;
	aux2 = NULL;
	return (new);

}
