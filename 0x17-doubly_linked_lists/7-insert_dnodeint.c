#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	dlistint_t *aux = *h, *a = *h, *new;
	unsigned int idx_len = 0, i = idx;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!*h)
		*h = new; return (new);

	while (aux != NULL)
		idx_len += 1, aux = aux->next;
	if (idx > idx_len)
		return (NULL);

	for (;i != 0; i--)
		a = a->next;
	new->next = a->next;
	new->prev = a;
	a->next = new;
	new->next->prev = new;
	return (new);
}
