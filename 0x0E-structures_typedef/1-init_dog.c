#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: is dog variable
 * @name: is name
 * @age: is age
 * @owner: is owner
 * Return: variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
