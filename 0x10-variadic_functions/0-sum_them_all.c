#include "variadic_functions.h"

/**
 * sum_them_all - sums elements
 *
 * @n: no. of elements
 *
 * @...: ellispes
 *
 * Return: sum of all intergers
 *
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);

	}

	va_end(ptr);

	return (sum);

}
