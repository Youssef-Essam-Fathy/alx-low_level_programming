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
	int c, c2;

	c = 0;

	/*find the size of dest array*/
	while (dest[c] != '\0')
		c++;

	/*iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] != '\0'; c2++)
		dest[c++] = src[c2];

	dest[c] = '\0';
	return (dest);
}

/**
 * _strncat - concatenate two strings with n bytes
 *
 * @dest: a character array parameter
 * @src: a character array parameter
 * @n: an integer input parameter
 *
 * Return: a character value
 **/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 *src doesn't need to be a null terminated
	 *if it contains n or more bytes
	 */

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}

/**
 * _strncpy - copies a string
 *
 * @dest: character pointer input parameter
 * @src: character pointer input parameter
 * @n: integer input parameter
 *
 * Return: a character value
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 *iterate through src array
	 *where if there is no null byte
	 *among the first n or more bytes
	 *the string placed in dest will not be
	 *null terminateed
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 *if the length of the source is less than n
	 *write additional nullbytes to dest to
	 *ensure that a total of n bytes is written
	 **/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

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
