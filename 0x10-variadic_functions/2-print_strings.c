#include <stdio.h>
#include <stdarg.h>
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

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		
	{
		int string;

		string = va_arg(ptr, int);

		if (separator && string == '0')
			printf("Nil%s", separator);

		else if (separator && string != '0')
		{
			printf("%s%s", *string, separator);
		}

		else if (!separator && string != '0')
		{
			printf("%s", *string);
		}

		else
		{
			printf("nil");
		}


	}

	va_end(ptr);

	printf("\n");

}
