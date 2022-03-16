#include "main.h"

/**
 * jack_bauer - returns time
 *
 * Return: time
 *
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w <= 2; w++)
	{
		for (y = 0; y <= 3; y++)
		{
			for(x = 0; x <= 5; x++)
			{
				for (z = 0; z <=9; z++)
				{
					puts(w);
					puts(y);
					puts(':');
					puts(x);
					puts(z);
					puts('\n');
				}
			}
		}
	}
}	
