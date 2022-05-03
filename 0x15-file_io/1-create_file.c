#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to write to file
 * Return: on succcess return 0
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;

	int i;

	int byt;

	if (!filename)
		return (-1);

	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ptr == -1)
		return(-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	byt = write(ptr, text_content, i);

	if (byt == -1)
		return (-1);

	close(ptr);

	return(1);

}