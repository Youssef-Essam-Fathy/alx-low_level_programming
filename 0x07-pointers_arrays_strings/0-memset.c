#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer input parameter
 * @b: character input parameter
 * @n: integer value
 *
 * Return: a character value
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int var;

	for (var = 0; n > 0; var++, n--)
	{
		s[var] = b;
	}

	return (s);
}
