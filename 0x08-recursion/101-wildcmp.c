#include "main.h"

/**
 * move_past_star - iterates past asterisk
 * @s2: the second string can contain wildcard
 * Return: character value
 **/

char move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (*s2);
}

/**
 * inception - returns an integer
 * @s1: first string
 * @s2: second string
 * Return: integer value
 **/

int inception(char *s1, char *s2)
{
	int t = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		t += wildcmp(s1 + 1, s2 + 1);
	t += inception(s1 + 1, s2);
	return (t);
}

/**
 * wildcmpr - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical, 0 if not identical
 **/

int wildcmp(char *s1, char *s2)
{
	int t = 0;

	if (!*s1 && *s2 == '*' && !move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		*s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			t += wildcmp(s1 + 1, s2 + 1);
		t += inception(s1, s2);
		return (!!t);

	}
	return (0);
}
