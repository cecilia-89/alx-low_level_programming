#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: the destination str
 * @src: the source str
 * Return: pointer to the dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned long int count, srclen, destlen;

	srclen = strlen(src);

	destlen = strlen(dest);

	for (count = 0; count < srclen; count++)
	{
		dest[destlen] = src[count];

		destlen++;
	}

	dest[destlen] = '\0';

	return (dest);

}
