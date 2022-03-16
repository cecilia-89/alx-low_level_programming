#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 *
 * @n: interger
 *
 */

void print_to_98(int n)
{
	int c;

	if (n < 98)
	{

		for (c = n; c < 99; c++)
		{
			printf("%d, ", c);
		}
	}
	
	if (n > 98)
	{
		for (c = n; c < 99; c--)
		{
			printf("%d, ", c)

		}
	}

}
