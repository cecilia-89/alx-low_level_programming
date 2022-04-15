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

		if (string)

			printf("%s", string);

			if (i != n - 1)
   
				printf("%s", separator);

		else if (!string)
			printf("nil");


	}

	printf("\n");

	va_end(ptr);

}

int main(void)
{
	    print_strings(", ", 2, "Jay", "Django");
	        return (0);
}
