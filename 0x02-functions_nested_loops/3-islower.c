#include <stdio.h>

/**
 * isLower - checks for lowercase alphabet
 *
 * 'c' - interger
 *
 * Return: 0 if lowercase otherwise 1
 *
 */

int _islower(int c)
{

	if ( islower(c))
	{
		return (1);
	}

	else
	{
		return (0);

	}
}

