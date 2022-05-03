#include "main.h"

/**
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;

	int i;

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
	}

	return (0);


}