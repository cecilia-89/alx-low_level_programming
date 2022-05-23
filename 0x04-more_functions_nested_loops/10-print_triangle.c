#include "main.h"

void print_triangle(int size)
{
	int count, i;

	for (count = 1; count <= size; count++)
	{
		for (i = 0; i < count; i++)
		{
			putchar('#');

		}


		putchar('\n');

	}
}

int main(void)
{
	    print_triangle(2);
	        print_triangle(10);
		    print_triangle(1);
		        print_triangle(0);
			    return (0);
}
