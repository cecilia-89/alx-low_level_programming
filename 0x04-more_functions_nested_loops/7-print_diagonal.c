#include "main.h"

/**
 * print_diagonal - returns upper
 * @n: interger
 * Return: 0 Always
 *
 */


void print_diagonal(__attribute__((unused)) int n)
{
	int i;

	if (n <= 0)
		putchar('\n');

	else
	{

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar(92);

			_putchar('\n');
		}


	}

}
