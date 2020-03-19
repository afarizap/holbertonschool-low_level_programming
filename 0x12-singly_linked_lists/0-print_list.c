#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: head of constant list_t being counted
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int contador = 0;

	while (h)
	{
		if (!(*h).str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		contador++;
	}
	return (contador);
}
