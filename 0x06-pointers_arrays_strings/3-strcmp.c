#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first str 
 * @s2: second srt
 * Return: either 0 on success
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])

				return(1);

			return (-1);
		}
	}

	return (0);
}
