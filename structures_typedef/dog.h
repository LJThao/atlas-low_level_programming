#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - type with the following elements
 * @name: name
 * @age: age
 * @owner: owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
