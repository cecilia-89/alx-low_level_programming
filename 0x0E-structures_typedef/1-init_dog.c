#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a structure
 *
 * @d: base address
 * @name: character
 * @age: float
 * @owner: character
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		(*d).age = age;

		d->name = name;

		d->owner = owner;

	}


}
