#include <stdio.h>
#include "main.h"

/**
 * print_line - prints
 * @n: interger
 *
 * Return: 0 Always
 *
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}

	}

	_putchar('\n');

}
