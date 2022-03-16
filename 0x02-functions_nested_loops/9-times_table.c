#include "main.h"
#include <stdio.h>

/**
 * times_table - prints times table
 *
 * Return: times table
 *
 */

void times_table(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			_putchar(n * m);
			_putchar(',');
			_putchar(' ');

		}

		putchar('\n');

	}

}

