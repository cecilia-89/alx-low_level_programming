#include "main.h"

/**
 * string_toupper - conert string to uppercae
 * @str: stirng to capatilize
 * Return: str in uppercase
 */


char *string_toupper(char *str)
{
	size_t ln, count;

	ln = strlen(str);

	for (count = 0; count < ln; count++)
	{
		if (str[count] > 96 && str[count] < 123)

			str[count] = str[count] - 32;
	}

	return (str);

}
