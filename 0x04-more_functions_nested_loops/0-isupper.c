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

	for (i = 65; i <= 90; i++)
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
