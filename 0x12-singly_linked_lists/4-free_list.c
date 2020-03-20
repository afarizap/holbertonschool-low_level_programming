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
	list_t *tengame;

	tengame = head;
	while (head)
	{
		tengame = head;
		head = (*head).next;
		free((*tengame).str);
		free(tengame);
	}
	free(head);
}
