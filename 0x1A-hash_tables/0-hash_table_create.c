#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 * Return: hs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *node;
	hash_table_t *table;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(node) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
