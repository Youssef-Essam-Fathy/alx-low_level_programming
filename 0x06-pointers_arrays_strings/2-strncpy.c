#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: character pointer input parameter
 * @src: character pointer input parameter
 * @n: integer input parameter
 *
 * Return: a character value
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i, i2;

	i = 0;

	/*find the size of dest*/
	while (dest[i])
		i++;

	for (i2 = 0; i2 < n && src[i2] != '\0'; i2++)
		dest[i + i2] = src[i2];

	dest[i] = '\0';

	return (dest);
}
