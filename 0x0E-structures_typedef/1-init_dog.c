#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog type
 * @name: string name  of  the dog
 * @age: float age of the dog
 * @owner: dog's owner string
 *
 * Return: void
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
