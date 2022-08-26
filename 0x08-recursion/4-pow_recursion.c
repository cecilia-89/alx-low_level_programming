#include "main.h"

/**
 * _pow_recursion - prints a string
 * @x: the interger
 * @y: the power
 * Return: length of the string
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
