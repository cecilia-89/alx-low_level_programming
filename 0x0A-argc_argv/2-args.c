#include "main.h"
#include <stdio.h>

/**
 * main - This is the main function
 * @argc: count of variables
 * @argv: the variables
 * Return: on success 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
