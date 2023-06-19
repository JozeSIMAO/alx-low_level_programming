#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog - a struct for dogs
 * @name: is name of dog
 * @age: if age of the dog
 * @owner: is the owner of the dog
 *
 * Description: This struct is used to create a set of
 * different dogs and their owners with also their
 * information
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
