#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dllist
 * @head: start of the node
 * @index: indext of list to remove
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *auxp = *head;
	unsigned int temp = 0;

	while (aux->next)
		temp++, aux = aux->next;
	if (index > temp)
		return (-1);
	temp = 0;
	while (index != temp)
		temp++, auxp = auxp->next;
	aux = *head;
	if (aux->prev)
	{
		aux = aux->prev;
		aux->next = auxp->next;
		auxp->next->prev = aux;
	}
	return (1);
}
