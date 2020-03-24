#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer with head address
 * @n
 * Return: nuevonodo.
 */
listint_t *add_nodeint_end(listint_t **head, const int *n)
{
	listint_t *nuevonodo;
	listint_t *temporal;

	nuevonodo = malloc(sizeof(listint_t));

	nuevonodo->n = *n;
	(*nuevonodo).next = NULL;
	if (!*head)
		*head = nuevonodo;
	else
	{
		temporal = *head;
		while ((*temporal).next)
			temporal = (*temporal).next;
		(*temporal).next = nuevonodo;
	}
	return (nuevonodo);
}
