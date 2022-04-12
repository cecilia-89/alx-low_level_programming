#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a structure
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
		pritnf("Name: (nil)")

	}

	else
	{
		printf("Name: %s", d -> name)
	}


}
