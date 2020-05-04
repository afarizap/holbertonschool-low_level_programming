#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of the dllist
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head, *aux2 = NULL;

	while (aux)
	{
		aux2 = aux;
		aux = (*aux).next;
		free(aux2);
	}
}
