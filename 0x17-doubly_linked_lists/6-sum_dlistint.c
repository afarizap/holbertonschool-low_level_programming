#include "lists.h"
/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * Return: int with the sum of all list or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux = NULL;

	aux = head;
	while (aux)
	{
		sum += (*aux).n;
		aux = (*aux).next;
	}
	aux = NULL;
	return (sum);
}
