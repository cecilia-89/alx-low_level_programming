#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success
 *
 */

int main(void)
{
	int x;
	int y;

	x = 48;

	y = 49;

	while (x < 58)
	{
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		
			y++;

		}

		x++;
	}


return (0);

}
