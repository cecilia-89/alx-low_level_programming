#include <stdarg.h>

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

	if (n == 0)
	{
		return (0);
	}


	int i, sum;

	sum = i = 0;

	va_list ptr;

	va_start(ptr, n);

	for (; i < n; i++)
	{
		sum += va_arg(ptr, int);

	}

	va_end(ptr);

	return (sum);

}
