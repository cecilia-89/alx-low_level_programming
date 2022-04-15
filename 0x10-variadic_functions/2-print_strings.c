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
 * Return: strings seperated
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	char *string;


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);

		if (!string)

			printf("nil");

		else 
			printf("%s", string);

			if (i != n - 1)
				printf("%s", separator);


	}

	printf("\n");

	va_end(ptr);

}
