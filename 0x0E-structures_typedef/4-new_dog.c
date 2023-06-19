#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);
	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;

	return (dog);
}
