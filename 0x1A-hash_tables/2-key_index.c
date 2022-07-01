#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb_num;

	djb_num = hash_djb2((unsigned char *)key);

	return (djb_num % size);
}
