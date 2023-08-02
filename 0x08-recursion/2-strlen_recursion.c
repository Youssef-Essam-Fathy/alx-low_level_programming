#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string parameter
 *
 * Return: integer value
 **/

int _strlen_recursion(char *s)
{
	int in = 0;

	if (*s > '\0')
	{
		in = in + _strlen_recursion(s + 1) + 1;
	}

	return (in);
}
