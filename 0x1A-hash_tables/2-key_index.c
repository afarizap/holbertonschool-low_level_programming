#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: the indexat key/value should be stored in the array of the ht
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
       	hash %= size;
	return hash;
}
