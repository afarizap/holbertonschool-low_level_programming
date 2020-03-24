#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: pointer to head
 * Return: return number of the head
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *aux;

	if (!head)
		return (0);
	if (*head)
	{
		aux = *head;
		x = aux->n;
		*head = aux->next;
		free(aux);
	}
	return (x);
}
