#include "main.h"

/**
 * _strlen - returns the string length
 *
 * @s: character pointer = string
 *
 * Return: string length
 **/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
