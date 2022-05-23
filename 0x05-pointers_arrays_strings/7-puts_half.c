#include "main.h"

/**
 * puts_half - prints the later half of a string
 * @str: pointer to char
 *
 */

void puts_half(char *str)
{
	unsigned long int i, length, dividend;

	length = strlen(str);

	dividend = length/ 2;

	if (length % 2 != 0)

		dividend = ((length - 1) / 2) -1;

	for (i = dividend; i < length; i++)
	{
		putchar(str[i]);

	}

	putchar('\n');

}
