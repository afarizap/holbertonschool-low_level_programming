#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - malloc with 0 assigned.
 * @nmemb: number of memory in bytes
 * @size: the size of the memory
 * Return: string or null if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (; x < size * nmemb; x++)
		s[x] = 0;
	return (s);
}
