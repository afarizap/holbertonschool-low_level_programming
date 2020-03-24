#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: pointer to head
 * Return: return number of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return (0);
	aux = *head;
	free(head);
	*head = aux->next;
	return (aux->n);
}
