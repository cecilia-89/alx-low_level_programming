#ifndef DOG
#define DOG

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner:  owner
 * Description: This struct is for dog
 */

typedef struct dog
{
	char *name;

	float age;

	char *owner;

} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* dog */
