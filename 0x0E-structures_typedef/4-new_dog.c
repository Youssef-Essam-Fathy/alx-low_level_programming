#include <stdlib.h>
#include "dog.h"

/**
 * str_len - finds  thhe  length if  the string
 * @s: string
 * Return: length of string
 **/

int str_len(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * str_cpy - copies src to dest
 * @dest: destination
 * @src: source
 * Return: character value
 **/

char *str_cpy(char *dest, char *src)
{
	int indx;

	for (indx = 0; src[indx]; indx++)
		dest[indx] = src[indx];
	dest[indx] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name for new dog
 * @age: age for new dog
 * @owner: owner of the new dog
 * Return: dog_t or NULL if function fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (str_len(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = str_cpy(d->name, name);
	d->age = age;
	d->owner = str_cpy(d->owner, owner);

	return (d);
}
