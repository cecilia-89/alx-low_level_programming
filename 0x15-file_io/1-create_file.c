#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to write to file
 * Return: on succcess return 0
 */

int create_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (!filename)
		return (-1);

	ptr = open(filename, O_CREAT | O_TRUNC | O_RDONLY, 0600);

	if (text_content)
	{
		while (!feof(ptr))
		{
			_putchar(text_content);
		}
	}

	return (0);


}