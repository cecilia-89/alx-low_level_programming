#include "main.h"

/**
 * print_binary - converts decimal to binary
 *
 * @n: pointer to long unsigned int
 *
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)

			print_binary(n);

		_putchar((n & 1) + '0');
	}

	else
	{
		_putchar('0');
	}

}