#include "search_algos.h"

/**
 * linear_search - performs linear search on an array
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 * Return: the index of the searched value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
