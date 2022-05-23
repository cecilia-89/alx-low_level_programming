#include "main.h"

/**
 * puts2 - prints one and the other
 */

void puts2(char *str)
{
	long unsigned int length, i;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		putchar(str[i]);

		i++;
	}

	putchar('\n');

}
