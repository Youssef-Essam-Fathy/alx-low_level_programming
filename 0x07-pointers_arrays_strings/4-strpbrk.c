#include "main.h"

/**
 * _strpbrk - searches for any set of bytes
 *
 * @s: string
 * @accept: character bytes
 *
 * Return: a character value
 **/

char *_strpbrk(char *s, char *accept)
{
	char n1, n2;
	char *ptr;

	for (n1 = 0; s[n1] != '\0'; n1++)
	{
		for (n2 = 0; accept[n2] != '\0'; n2++)
		{
			if (accept[n2] == s[n1])
			{
				p = &s[n1];
				return (p);
			}
		}
	}

	return (0);
}
