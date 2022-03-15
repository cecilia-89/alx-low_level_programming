#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success
 *
 */

int main(void)
{
	int w, x, y, z;

	w = 48;

	while (w < 58)
	{
		x = 48;

		while (x < 58)
		{
			y = 48;

			while (y < 58)
			{
				z = 48;

				while (z < 58)
				{

					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');

					z++;
				}

				y++;
			}

			x++;
		}

		w++;

	}


return (0);

}
