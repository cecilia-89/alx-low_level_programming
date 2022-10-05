#include "search_algos.h"

/**
 * jump_search - performs binary search on an array
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 * Return: the index of the searched value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, step, i;

	if (array == NULL)
		return (-1);

	low = 0;
	step = sqrt(size);

	while (step < size)
	{
		if (array[step] < value)
		{
			low = step;
			step += sqrt(step);
		}

		else
		{
			for (i = low; i < step; i++)
			{
				if (array[i] == value)
					return (i);
			}
		}
	}

	return (-1);
}