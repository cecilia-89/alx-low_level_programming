#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content to be written
 * Return: on success 0
 * 
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;

	int i;

	int byt;

	if (!filename)
		return(-1);

	ptr = open(filename, O_RDONLY|O_APPEND);

	if (ptr == -1)
		return(-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++ )
			;

		write(ptr, text_content, i);

		if (byt == -1)
			return (-1);
	}

	close(ptr);

	return (0);


}