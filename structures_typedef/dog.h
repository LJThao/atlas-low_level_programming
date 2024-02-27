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
void print_dog(struct dog *d);
void free_dog(dog_t *d);

/**
 * dog_t - new name for the type struct dog
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
