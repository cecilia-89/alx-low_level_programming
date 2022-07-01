#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	hash_node_t *hash_node;

	h = malloc(sizeof(hash_table_t));

	h->size = size;

	h->array = &hash_node;

	return (h);
}
