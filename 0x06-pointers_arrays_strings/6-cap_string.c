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

	size_t length, c, slen, i;

	s = "\n' '\t,;.!?\"{}()";

	length = strlen(str);

	slen = strlen(s);

	for (c = 0; c < length; c++)
	{
		for (i = 0; i < slen; i++)
		{
			if ((str[c] > 96 && str[c] < 123) && (str[c - 1] == s[i] || !str[c - 1]))
			{
				str[c]  = str[c] - 32;
			}
		}

	}

	return (str);
}
