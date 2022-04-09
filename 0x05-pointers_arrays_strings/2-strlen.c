#include "main.h"
/**
 * _strlen - Returns length of a string
 *
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int byte_length, length;

	byte_length = sizeof(s);

	length = byte_length - 1;

	return length;

}
