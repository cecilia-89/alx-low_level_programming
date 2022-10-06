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
		printf("Value checked array[%ld] = [%ld]\n", low, low);

		if (array[step] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, step);

			for (i = low; i <= step; i++)
			{
				printf("Value checked array[%ld] = [%ld]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}

		low = step;
		step += sqrt(size);

	}
	printf("Value checked array[%ld] = [%ld]\n", low, low);
	printf("Value found between indexes [%ld] and [%ld]\n", low, step);
	return (-1);
}
