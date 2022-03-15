#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
int w, x, y, z;

for (w = 48; w < 58; w++)
{
	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			for (z = 48; z < 58; z++)
			{

				if (w + x < y + z || w + x + y + z == 194)
				{  
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
 					putchar(z);


					if (x + w + y + z != 227)
					{
						putchar(',');
						putchar(' ');
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

	return (0);
}
