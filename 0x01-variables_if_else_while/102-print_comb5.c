#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int x, y, z, i;

	x = 48;

	while (x < 58)
	{
		y = 48;

		while (y < 58)
		{
			z = 48;

			while (z < 58)
			{
				i = 48;

				while (i < 58)
				{      
					if ( x + y < z + i)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(i);

						if (x + y + z + i != 227)
						{
							putchar(',');
							putchar(' ');

						}

						else
						{
							break;
						}

					}
					

					i++;
				}

				z++;
		
			}

			y++;

		}
		
		x++;
	}

	return (0);
}
