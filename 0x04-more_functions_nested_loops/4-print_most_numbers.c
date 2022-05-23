#include "main.h"

/**
 * print_most_numbers - returns upper
 * Return: 0 Always
 *
 */


void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);

		}

	}
	_putchar('\n');

}
