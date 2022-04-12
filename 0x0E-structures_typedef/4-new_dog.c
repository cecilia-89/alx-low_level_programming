#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: character
 * @age: float
 * @owner: character
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog = {name, age, owner};

	return (struct new_dog);

}
