#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to head
 * @idx: index of the list where the new node should be added
 * @n: value of the node to be printed
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *paux, *paux2;

	paux2 = *head;
	paux = malloc(sizeof(listint_t));
	if (!paux)
		return (NULL);
	paux->n = n;
	if (!idx)
	{
		paux->next = paux2;
		*head = paux;
		return (*head);
	}
	while (idx > 1)
	{
		paux2 = paux2->next;
		idx--;
		if (!paux2)
		{
			free(paux);
			return (NULL);
		}
	}
	paux->next = paux2->next;
	paux2->next = paux;
	return (paux);
}
