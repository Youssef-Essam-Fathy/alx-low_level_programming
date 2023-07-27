#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first pointer parameter
 * @s2: second pointer parameter
 *
 * Return: an integer value and 0 in case s1 = s2
 **/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
