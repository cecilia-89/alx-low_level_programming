#ifndef DOG_T
#define DOG_T

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

} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* dog_t */
