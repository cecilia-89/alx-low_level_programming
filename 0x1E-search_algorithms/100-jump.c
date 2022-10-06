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
	size_t low, step, temp, i;

	if (array == NULL)
		return (-1);

	low = 0;
	step = sqrt(size);

	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		if (array[step] >= value)
		{
			temp = step;
			while (temp != low)
			{
				if (array[temp] == value || step >= size)
				{
					printf("Value found between indexes [%ld] and [%ld]\n", low, step);
					for (i = low; i <= step; i++)
					{
						if (i == size)
							break;

						printf("Value checked array[%ld] = [%d]\n", i, array[i]);
						if (array[i] == value)
							return (i);
					}
							break;
				}

				else
					temp--;
			}

		}

		low = step;
		step += sqrt(size);
	}

	return (-1);
}
