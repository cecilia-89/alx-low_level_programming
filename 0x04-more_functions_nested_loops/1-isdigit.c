#include <stdio.h>
#include "main.h"

/**
 * _isdigit - returns digit
 *
 * @c: interger
 *
 * Return: 0 or 1
 *
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return(0);
		}

	}

}
