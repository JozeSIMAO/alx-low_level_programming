#include "dog.h"
/**
 * str_len - gets the length of a string
 * @str: is the string
 * Return: return length of the string
 */

int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_cpy - copies a string including
 * the null terminator
 * @dest: pointer to the buffer to copy to
 * @src: string to copy
 * Return: pointer to dest
 */

char *str_cpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
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

	(*dog).name = malloc(str_len(name) + 1);

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	str_cpy((*dog).name, name);

	(*dog).owner = malloc(str_len(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	str_cpy((*dog).owner, owner);

	(*dog).age = age;
	return (dog);
}
