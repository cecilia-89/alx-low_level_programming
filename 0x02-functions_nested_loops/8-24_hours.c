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

	for (w = 48; w <= 51; w++)
	{
		for (y = 48; y <= 52; y++)
		{
			for (x = 48; x <= 54; x++)
			{
				for (z = 48; z <= 58; z++)
				{
					_putchar(w);
					_putchar(y);
					_putchar(':');
					_putchar(x);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
