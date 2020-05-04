#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of dllist
 * @n: number added
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *aux = *head;

	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;

	if (aux)
		(*aux).prev = new;
	aux = new;

	return (new);
}
