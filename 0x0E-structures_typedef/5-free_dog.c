#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
