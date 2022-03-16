#include <stdio.h>
#include "main.h"

/**
 * print_sign - returns 0, 1, -1
 *
 * @n: interger
 *
 * Return: either three above
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (1);

	}

}
