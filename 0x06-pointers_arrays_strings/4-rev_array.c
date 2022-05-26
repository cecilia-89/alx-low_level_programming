#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to int
 * @n: interger
 * Return: either 0 on success
 *
 */

void reverse_array(int *a, int n)
{
	int *arr, count, num;

	arr = malloc(n * sizeof(int));

	num = n;

	for (count = 0; count < n; count++)

		arr[count] = a[count];

	count  = 0;

	while (count < n)
	{
		a[count] = arr[num - 1];

		count++;

		num--;
	}

}
