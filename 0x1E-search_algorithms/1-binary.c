#include "search_algos.h"

/**
 * binary_search - performs binary search on an array
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 * Return: the index of the searched value
 */

int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size;

	while (start < end)
	{
		mid = floor((start + end) / 2);

		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d", array[i]);

			if (i != end - 1)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
