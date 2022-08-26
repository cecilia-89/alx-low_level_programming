#include "main.h"

/**
 * _sqrt_recursion - prints a string
 * @n: the interger
 * Return: length of the string
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	return (_sqrt_recursion(n / 2) + 1);
}
