#include "search_algos.h"

/**
 * interpolation_search - performs binary search on an array
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 * Return: the index of the searched value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	while (low < high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] < value)
			low = pos + 1;
		else if
			high = pos -1;
	}

	return (pos);
}