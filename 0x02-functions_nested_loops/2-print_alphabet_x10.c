#include <stdio.h>
#include "main.h"

/**
 * print_alphabets - prints alphabet in lowercase
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

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	print_alphabets();

	return (0);
}
