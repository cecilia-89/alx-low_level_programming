/**
 * void init_dog - initializes a structure
 *
 * @d: base address
 * @name: character
 * @age: float
 * @owner: character
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog.name = *name;
	
	dog.age = age;

	dog.owner = *owner;	

}

