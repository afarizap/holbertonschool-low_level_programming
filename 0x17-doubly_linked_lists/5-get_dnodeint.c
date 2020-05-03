#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: first node of the dllist
 * @index: index of the node, starting from 0
 * Return: NULL if node does not exist, the list if does
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get = head;

	for (; index > 0; index--)
	{
		get = (*get).next;
	if (!get)
		return (NULL);
	}
	return (get);
}
