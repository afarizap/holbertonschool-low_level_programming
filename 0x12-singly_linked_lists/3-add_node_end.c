#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - lenght of the string
 * @s: string
 * Return: contador.
 */
int _strlen(const char *s)
{
	int contador = 0;

	while (s[contador])
		contador++;
	return (contador);
}
/**
 * add_node_end - add new node at the end of the list.
 * @head: head node
 * @str: length of string
 * Return: nuevonodo;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevonodo;
	list_t *temporal;

	nuevonodo = malloc(sizeof(list_t));
	if (!nuevonodo)
		return (NULL);
	(*nuevonodo).str = strdup(str);
	(*nuevonodo).len = _strlen(str);
	if (!*head)
	{
		(*nuevonodo).next = *head;
		*head = nuevonodo;
	}
	else
	{
		(*nuevonodo).next = NULL;
		temporal = *head;
		while ((*temporal).next)
			temporal = (*temporal).next;
		(*temporal).next = nuevonodo;
	}
	return (nuevonodo);
}
