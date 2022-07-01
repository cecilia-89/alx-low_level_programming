#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: returns pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	hash_node_t *hash_node;

	h = malloc(sizeof(hash_table_t));

	if (h == NULL)
		return (NULL);

	hash_node = malloc(sizeof(size));

	if (hash_node == NULL)
		return (NULL)

	h->size = size;

	h->array = &hash_node;

	return (h);
}
