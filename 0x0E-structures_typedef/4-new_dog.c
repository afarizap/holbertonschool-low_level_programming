#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 *@name: name of the dog
 *@age: age of the dog
 *@owner: age of the dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *s1, *s2;

	s1 = _strdup(name);
	if (s1 == NULL)
		return (NULL);
	s2 = _strdup(owner);
	if (s2 == NULL)
	{
		free(s1);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	new_dog->name = s1;
	new_dog->age = age;
	new_dog->owner = s2;
	return (new_dog);
}
/**
 * *_strdup - returns copy of a string.
 * @str: - string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int a = 0, b = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (; str[a] != '\0'; a++)
		;
	s = malloc(sizeof(char) * a + 1);
	if (s == NULL)
		return (NULL);
	for (; b < a; b++)
		s[b] = str[b];
	return (s);
}
