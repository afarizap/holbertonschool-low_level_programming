#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to add to
 * @key: key, cannot be empty
 * Return: value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	idx = key_index((unsigned char *)key, ht->size);
	if (!ht->array[idx]->value)
		return (NULL);
	return (ht->array[idx]->value);
}
