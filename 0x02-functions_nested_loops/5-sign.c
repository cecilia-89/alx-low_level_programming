#include <stdio.h>
#include "main.h"

/**
 * print_sign - returns 0, 1, -1
 *
 * Return: either three above
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');

		return (1);
	}

	else if (n < 0)
	{
		printf('0');
		return (0);
	}

	else
	{
		printf('-');
		return (-1);

	}

}
