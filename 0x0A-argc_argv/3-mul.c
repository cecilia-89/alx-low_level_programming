#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;

	int product;

	product = 1;

	if (argc == 1)

		printf("Error\n");
	else
	{

		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);

		}		

		printf("%d\n", product);

	}

	return (0);

}
