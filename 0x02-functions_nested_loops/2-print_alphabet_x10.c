#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabets(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j < 123; j++)
		{
			putchar(j);

		}

		putchar('\n');
	}


}

int main(void)
{
	print_alphabets();

	return (0);
}
