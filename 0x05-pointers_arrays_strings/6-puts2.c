#include "main.h"

/**
 * puts2 - prints one and the other
 * @str: pointer to char
 */

void puts2(char *str)
{
	unsigned long int length, i;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		putchar(str[i]);

		i++;
	}

	putchar('\n');

}
