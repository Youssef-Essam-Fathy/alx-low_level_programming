#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: character parameter
 * @src: character input parameter
 * @n: integer parameter
 *
 * Return: character value
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int var;

	for (var = 0; var < n; var++)
	{
		dest[var] = src[var];
	}

	return (dest);
}
