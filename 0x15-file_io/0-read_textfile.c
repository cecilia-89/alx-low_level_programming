#include "main.h"

/**
 * read_textfile - creates a file
 * @filename: name of file
 * @letters: content to write to file
 * Return: return the no. of bytes
 * 
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;

	ptr = fopen(*filename, O_RDONLY);

	if (!ptr)
		return (0);

	while (!feof(ptr))
	{
		write(1, ptr, letters);
	}

	return(0);
}