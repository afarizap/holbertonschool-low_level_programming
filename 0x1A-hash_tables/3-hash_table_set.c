#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add to
 * @key: key, cannot be empty
 * @value: value associated with the key. must be dup, can be empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!key)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(*node));
	ht->array[idx] = node;

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->value == NULL || node->key == NULL)
		free(node->value), free(node->key); return (0);
	return (1);
}
