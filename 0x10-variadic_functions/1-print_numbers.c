#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - sums elements
 *
 * @separator: pointer to char
 *
 * @n: no. of elements
 *
 * @...: ellispes
 *
 * Return: numbers seperated
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
	{
		if (separator)
			printf("%d%s", va_arg(ptr, int), separator);
		else
		{
			printf("%d", va_arg(ptr, int));
		}

	}

	va_end(ptr);

	printf("\n");

}