#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: a character input parameter
 * @src: a character input  paraameter
 *
 * Return: a character output
 **/

char *_strcat(char *dest, char *src)
{
	char c, c2;

	c = 0;

	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
