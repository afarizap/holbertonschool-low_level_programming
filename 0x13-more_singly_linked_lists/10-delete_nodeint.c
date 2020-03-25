#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: pointer to start of list
 * @index: index of the node that should be deleted
 * Return: 1 if succeeded, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *aux, *aux2;

	aux = *head;
	while (n + 1 < index)
	{
		aux = aux->next;
		i++;
	}
	aux2 = aux->next;
	aux->next = aux2->next;
	free(aux2);
	return (1);
}
