#include "main.h"

/**
 * print_last_digit - pints last digit
 *
 * @n: interger
 *
 * Return: last digit
 *
 */


int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -l;
	}

	int lastDigit = n % 10;

	_putchar(lastDigit + '0');

	return (lastDigit);
}

