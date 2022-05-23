#include "main.h"

/**
 * rev_string - printts strings
 *
 * @s: pointer to char
 *
 */


void rev_string(char *s)
{
	char *str;

	unsigned long int len, length, count;

	str = strdup(s);

	length = strlen(s) - 1;

	len = length;

	for (count = 0; count <= length; count++)
	{
		s[count] = str[len];

		len--;
	}


}
