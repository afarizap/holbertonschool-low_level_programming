#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
