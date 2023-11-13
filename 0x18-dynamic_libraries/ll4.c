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
			return (s + var);
		}
	}

	return ('\0');
}

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
	int n1, n2;
	char *ptr;

	for (n1 = 0; s[n1] != '\0'; n1++)
	{
		for (n2 = 0; accept[n2] != '\0'; n2++)
		{
			if (accept[n2] == s[n1])
			{
				ptr = &s[n1];
				return (ptr);
			}
		}
	}

	return (0);
}

/**
 * _strstr - locates a substring.
 *
 * @haystack: a character we search in for a substring
 * @needle: the substring we look for it
 *
 * Return:a substring
 **/

char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		num = 0;
		if (needle[num] == haystack[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);
				num++;
			} while (haystack[num] == needle[num]);
		}
		haystack++;
	}

	return (0);
}
