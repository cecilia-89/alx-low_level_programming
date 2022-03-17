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
	if (n <= 0)
	{
		_putchar('\n');

	}

	else 
	{
		_putchar(n * '_');

	}

	_putchar('\n');

}
