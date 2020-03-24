#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer when start the list
 * @index: index of the node starting at 0
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int aux = 0;

	while (aux < index)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
		aux++;
	}
	return (head);
}
