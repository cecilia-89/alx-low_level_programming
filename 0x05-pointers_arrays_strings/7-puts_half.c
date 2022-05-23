#include "main.h"

/**
 * puts_half - prints the later half of a string
 */

void puts_half(char *str)
{
	long unsigned int i, length, dividend;

	length = strlen(str);

	dividend = length/2;

	if (length % 2 != 0)

		dividend = (length - 1) / 2;

	for (i = dividend; i < length; i++)
	{
		putchar(str[i]);

	}

	putchar('\n');

}
