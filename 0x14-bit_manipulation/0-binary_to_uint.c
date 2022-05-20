#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 *
 * @b: pointer to binary
 *
 * Return: the value in decimal
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);

	int i;

	int total = 0;

	int value = 1;

	if (!b)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			total+=value;

		value *= 2;
	}

return (total);

}

