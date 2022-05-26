#include "main.h"

/**
 * _strncpy - concatenates strings
 * @dest: the destination str
 * @src: the source str
 * @n: number to bytes to concatenate
 * Return: the destination string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);
}
