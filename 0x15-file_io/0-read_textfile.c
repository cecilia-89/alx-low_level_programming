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
	int ptr, byt, n;

	char buf[letters];

	if (!filename)
		return (0);

	ptr = open(filename, O_RDONLY);

	if (ptr == -1)
		return (0);

	n = read(ptr, buf, letters);

	byt = write(STDOUT_FILENO, buf, n);

	close(ptr);

	return(byt);


}