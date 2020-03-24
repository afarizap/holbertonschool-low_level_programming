#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer when start the list
 * @index: index of the node starting at 0
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i = 0;

	aux = head;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	if (index > i)
		return (NULL);
	i = 0;
	aux = head;
	while (i != index)
	{
		aux = aux->next;
		i++;
	}
	return (aux);
}
