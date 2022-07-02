#include "hash_tables.h"

/**
 * hash_table_set - adds a new element to the hash
 * @ht: size of the array
 * @key: the key to the hash
 * @value: the value of the hash
 * Return: either 0 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;

	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (0);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	index = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[index];

	ht->array[index] = malloc(sizeof(hash_node_t));

	if (ht->array[index] == NULL)
		return (0);

	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = ht->array[index];
			break;
		}
		temp = temp->next;
	}

	ht->array[index]->value = strdup(value);

	ht->array[index]->key = strdup(key);

	ht->array[index]->next = NULL;

	return (1);
}
