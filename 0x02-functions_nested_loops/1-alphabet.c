#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	putchar('\n');

}

int main(void)
{
	print_alphabet();

	return (0);

}
