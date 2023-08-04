#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: string
 * @accept: character
 *
 * Return: a positive integer value
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int inum, jnum;

	for (inum = 0; s[inum] != '\0'; inum++)
	{
		for (jnum = 0; accept[jnum] != s[inum]; jnum++)
		{
			if (accept[jnum] == '\0')
				return (inum);
		}
	}
	return (inum);
}
