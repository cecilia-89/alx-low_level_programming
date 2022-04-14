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
	int i;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		
	{
		char *string;

		string = va_arg(ptr, char *);

		if (*separator != '0' && *string == '0')
			printf("Nil%s", separator);


		else if (*separator != '0' && *string != '0')
		{
			printf("%s%s", string, separator);
		}


		else if (i == n - 1 || *separator == '0' && *string != '0')
		{
			printf("%s", string);
		}


		else
		{
			printf("nil");
		}


	}

	va_end(ptr);

	printf("\n");

}

int main(void)
{
	    print_strings(", ", 2, "Jay", "0");
	        return (0);
}
