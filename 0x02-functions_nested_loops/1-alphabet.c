#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
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


/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();

	return (0);

}
