#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the dllist
 * @n: number to add to the dllist
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;
	*head = new;

	return (*head);
}
