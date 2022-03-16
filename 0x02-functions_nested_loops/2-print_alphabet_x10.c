#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j < 123; j++)
		{
			putchar(j);

		}

		putchar('\n');
	}


}

