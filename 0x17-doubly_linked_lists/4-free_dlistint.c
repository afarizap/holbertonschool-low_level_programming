#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of the dllist
 */

void free_dlistint(dlistint_t *head)
{
	while (head && (*head).next)
	{
		head = (*head).next;
		free((*head).prev);
	}
	free(head);
}
