#include "main.h"

/**
 * print_array - prints certain values
 *
 * @a: pointer to array of type int
 *
 * @n: interger
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);

		else
		{
			printf("%d, ", a[i]);
		}
	}

	printf("\n");
}
