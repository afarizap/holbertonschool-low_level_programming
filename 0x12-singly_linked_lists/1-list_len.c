#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -  conunt number of linked list.
 * @h: head of first structure(node)
 * Return:  returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int contador = 0;

	while (h)
	{
		h = (*h).next;
		contador++;
	}
	return (contador);
}
