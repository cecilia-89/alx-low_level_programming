#include <stdio.h>

/**
 * _puts - printts strings
 *
 * @str: pointer to char
 *
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);

		str++;

	}

	printf("\n");

}
