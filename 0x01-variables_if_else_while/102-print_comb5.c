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
		y = x;

		putchar(x);

		while (y < 58)
		{
			putchar(y);
			putchar(' ');

			z = y;

			while (z < 58)
			{
				putchar(z);

				i = z + 1;

				while (i < 58)
				{
					putchar(i);
					putchar(',');
					putchar(' ');
					i++;
				}
				z++;
		y++;	}
	x++;	}
	}

	putchar('\n');
	return (0);
}
