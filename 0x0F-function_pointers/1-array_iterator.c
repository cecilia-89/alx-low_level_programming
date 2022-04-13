#include <stddef.h>

/**
 * array_iterator - prints a name
 *
 * @array: pointer to int
 * @action: pointer to function
 * @size_t: size of array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(action)(array[i]);

	}

}


