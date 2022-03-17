#include <stdio.h>
#include "main.h"

/**
 * _isupper - returns upper
 *
 * @c: interger
 *
 * Return: 0 Always
 *
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}

		else
		{
			return (0);
		}
	}
}
