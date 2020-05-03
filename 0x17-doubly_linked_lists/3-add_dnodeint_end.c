#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of dllist
 * @n: number added
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *aux = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		aux = *head;
		while ((*aux).next)
			aux = (*aux).next;
		(*new).prev = aux;
		(*aux).next = new;
	}
	return (new);
}
