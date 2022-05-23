#include "main.h"

/**
 * more_numbers - returns upper
 * Return: 0 Always
 *
 */


void more_numbers(void)
{
	int count, i, j;

	count = 0;

	while (count < 10)
	{
		for (i = 48; i < 58; i++)
		{
			for (j = 48; j < 58; j++)
			{
				if (i != 48)
					_putchar(i);

				_putchar(j);

				if (j == 52 && i == 49)
					break;
			}

			if (i == 49)
				break;
		}

		count++;

		_putchar('\n');
	}

}
