#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This is the main function
 * @argc: count of variables
 * @argv: the variables
 * Return: on success 0
 */

int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;

	if (argc == 1)

		printf("0\n");
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");

				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);

	}

	return (0);

}
