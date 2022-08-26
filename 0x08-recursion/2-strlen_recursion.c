#include "main.h"

/**
 * _strlen_recursion - prints a string
 * @s: pointer to char
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
