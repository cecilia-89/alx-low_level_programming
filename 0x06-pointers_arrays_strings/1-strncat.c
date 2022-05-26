#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: the destination str
 * @src: the source str
 * @n: number to bytes to concatenate
 * Return: the destination string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned long int destlen, srclen;

	int count;

	srclen = strlen(src);

	destlen = strlen(dest);

	if (n > (int) srclen)

		n = srclen;

	for (count = 0; count < n; count++)
	{
		dest[destlen] = src[count];

		destlen++;
	}

	dest[destlen] = '\0';

	return (dest);

}
