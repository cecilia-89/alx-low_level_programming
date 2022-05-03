#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to write to file
 * Return: on succcess return 0
 */

int create_file(const char *filename, char *text_content)
{
	int ptr, i, byt;

	if (!filename)
		return (0);

	ptr = open(filename, O_CREAT|O_TRUNC, 0600);

	if (ptr == -1)
		return(0);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	byt = write(ptr, text_content, i);

	close(ptr);

	return(byt);

}