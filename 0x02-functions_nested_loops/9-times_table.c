#include "main.h"
/**
 * times_table - prints times table
 *
 * Return: times table
 *
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			printf(n * m);
			putchar(',');
			putchar(' ');

		}

		putchar('\n');

	}

}

