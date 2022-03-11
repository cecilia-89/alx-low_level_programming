#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;

	int x;

	x = 97;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

	}

	while (x <= 102)
	{
	putchar(x);

	x++;
	}

	putchar('\n');
	return (0);
}

