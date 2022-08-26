#include "main.h"

/**
 * factorial - prints a string
 * @n: pointer to char
 * Return: length of the string
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (factorial(n - 1) * n);
}
