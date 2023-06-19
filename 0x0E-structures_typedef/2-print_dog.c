#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct  dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(98);
	if ((*d).name == NULL)
		printf("(nil)\n");
	if ((*d).age == 0)
		printf("(nil)\n");
	if ((*d).owner == NULL)
		printf("(nil)\n");

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
