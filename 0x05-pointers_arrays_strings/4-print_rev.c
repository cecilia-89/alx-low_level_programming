#include <stdio.h>
#include "2-strlen.c"

/**
 * print_rev - printts strings
 *
 * @s: pointer to char
 *
 */


void print_rev(char *s)
{
	int len = _strlen(s)--;

	for (; len >= 0; len--)
	{
		printf("%c", *(s + len));

	}

	printf("\n");

}
