#include <stdarg.h>
#include <stdio.h>
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


	unsigned int i;

	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);

	}

	va_end(ptr);

	return (sum);

}

int main(void)
{
	    int sum;

	        sum = sum_them_all(2, 98, 1024);
		    printf("%d\n", sum);
		        sum = sum_them_all(4, 98, 1024, 402, -1024);
			    printf("%d\n", sum);    
			        return (0);
}
