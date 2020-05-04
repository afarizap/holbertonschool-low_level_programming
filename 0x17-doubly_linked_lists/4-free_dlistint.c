#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of the dllist
 */

void free_dlistint(dlistint_t *head)
{
	if ((*head).prev != NULL)
	{
		while ((*head).prev != NULL)
		{
			head = (*head).prev;
			free((*head).next);
		}
		free(head);
	}
	else if ((*head).next != NULL)
	{
		while ((*head).next != NULL)
		{
			head = (*head).next;
			free((*head).prev);
		}
		free(head);
	}
	else
		free(head);
}
