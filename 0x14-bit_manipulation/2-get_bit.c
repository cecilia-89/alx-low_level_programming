#include "main.h"

/**
 * get_bit - converts binary to decimal
 *
 * @n: pointer to binary
 *
 * @index: index
 *
 * Return: The index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = n >> index;

	if (bit > 32)
		return (-1);

	return (bit & 1);


}