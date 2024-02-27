#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *lj-dog;
	int name-1 = 0, owner-1 = 0;

	if (name != NULL && owner !=NULL) {
		name-1 = _strlen(name) + 1;
		own-1 = strlen(owner) + 1;
		lj-dog = malloc(sizeof(dog_t));

		if (lj-dog == NULL)
			return NULL;

		lj-dog->name = malloc(sizeof(char) * name-1);

		if (lj-dog->name == NULL) {
			free(lj-dog);
			return NULL;
		}

		lj-dog->owner = malloc(sizeof(char) * owner-1);

		if (lj-dog->owner == NULL) {
			free(lj-dog->name);
			free(lj-dog);
			return NULL;
		}

		lj-dog->name = _strcpy(lj-dog->name, name);
		lj-dog->owner = _strcpy(lj-dog->owner, owner);
		lj-dog->age = age;
	}
	return (lj-dog);
}

/**
 * _strlen - returning the length of the string
 * @s: string
 * Return: string
 */

int _strlen(char *s) {
	int t = 0;

	for (; *s != '\0'; s++) {
		t++;
	}
	return (t);
}

/**
 * _strcpy - a copied string
 * @dest: dest
 * @src: src
 * Return: all
 */

char *_strcpy(char *dest, char *src) {
	int a;

	for (a = 0; src[a] != '\0'; a++) {
		dest[a] = src[a];
	return (dest);
	}
}
