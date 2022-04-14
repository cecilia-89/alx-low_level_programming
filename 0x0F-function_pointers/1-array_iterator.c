#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - prints a name
 *
 * @array: pointer to int
 * @action: pointer to function
 * @size: size of array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{

		for (i = 0; i < size; i++)
		{
			(action)(array[i]);

		}

	}



}
