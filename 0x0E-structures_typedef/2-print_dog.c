#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog 
 *
 * @d: base address
 *
 */

void print_dog(struct dog *d)
{
	if (d = NULL)
	{
		return;
	}

	if (d -> name == NULL)
	{
		printf("Name: (nil)");

	}

	else
	{
		printf("Name: %s", d -> name);
	}


}
