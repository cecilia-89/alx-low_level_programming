#include "main.h"

/**
 * cap_string - capitalizes a word
 * @str: the string to capitalize
 * Return: Capitalized string;
 *
 */

char *cap_string(char *str)
{
	char *s;

	size_t length, count, slen, i;

	s = "\n' '\t,;.!?\"{}()";

	length = strlen(str);

	slen = strlen(s);

	for (count = 0; count < length; count++)
	{
		for (i = 0; i < slen; i++)
		{
			if ((str[count] > 96 && str[count] < 123) (&& str[count - 1] == s[i] || !str[count - 1]))
			{
				str[count]  = str[count] - 32;
			}
		}

	}

	return (str);
}
