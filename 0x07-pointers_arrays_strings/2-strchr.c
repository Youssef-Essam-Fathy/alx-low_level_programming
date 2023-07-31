#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: a string
 * @c: a character
 *
 * Return: a character value
 **/

char *_strchr(char *s, char c)
{
	int var;

	for (var = 0; s[var] >= '\0'; var++)
	{
		if (s[var] == c)
		{
			return (s[var] - 1);
		}
	}

	return ('\0');
}
