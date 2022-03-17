#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - returns time
 *
 * Return: time
 *
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 48; w < 51; w++)
	{
		for (y = 48; y < 58; y++)
		{
			for (x = 48; x <= 53; x++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (w != 50 && y != 52 && x != 53 && z != 59)

					{	putchar(w);
						putchar(y);
						putchar(':');
						putchar(x);
						putchar(z);
						putchar('\n');
					}

					else
					{
						break;
					}
				}
			}
		}
	}
}

