#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free linked list memory
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *temporal;

	temporal = head;
	while (head)
	{
		temporal = head;
		head = (*head).next;
		free((*temporal).str);
		free(temporal);
	}
	free(head);
}
