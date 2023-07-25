#include "main.h"

/**
 * _strcpy - a pointer function
 *
 * @dest: character input parameter
 * @src: character input parameter
 *
 * Return: a character
 **/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
