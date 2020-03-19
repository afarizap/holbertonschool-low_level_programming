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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the double pointer
 * @str: string to be added
 * Return: nuevonodo.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevonodo;

	nuevonodo = malloc(sizeof(list_t));
	if (!nuevonodo)
		return (NULL);
	(*nuevonodo).str = strdup(str);
	(*nuevonodo).len = _strlen(str);
	(*nuevonodo).next = *head;
	*head = nuevonodo;
	return (nuevonodo);
}
