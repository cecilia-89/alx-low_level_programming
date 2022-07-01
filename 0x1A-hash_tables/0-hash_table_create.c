#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: returns pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int i;

	hash_table_t *h;

	h = malloc(sizeof(hash_table_t));

	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(void*) * size);

	if (h->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		h->array[i] = NULL;

	return (h);
}
