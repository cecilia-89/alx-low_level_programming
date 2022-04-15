#include "variadic_functions.h"

/**
 * print_strings - sums elements
 *
 * @separator: pointer to char
 *
 * @n: no. of elements
 *
 * @...: ellispes
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	char *str;


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (!str)

			printf("(nil)");

		else
			printf("%s", str);

		if (i != n - 1)
			if (separator)
				printf("%s", separator);


	}

	printf("\n");

	va_end(ptr);

}
