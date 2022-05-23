#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: string destination
 *
 * @src: string source
 *
 * Return: pointer to the string
 *
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long int length, count;

	length = strlen(src);

	for (count = 0; count < length; count++)
	{
		dest[count] = src[count];
	}

	dest[count] = '\0';

	return (dest);
}
