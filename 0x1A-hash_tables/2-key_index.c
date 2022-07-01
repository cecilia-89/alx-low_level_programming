#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: index to find
 * @size: size of the array
 * Return: the index where @key is to be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb_num;

	djb_num = hash_djb2((unsigned char *)key);

	return (djb_num % size);
}
