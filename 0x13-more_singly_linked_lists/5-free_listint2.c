#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *aux2;

	aux = *head;
	while (head)
	{
		aux2 = aux;
		aux = aux->next;
		free(aux2);
	}
}
