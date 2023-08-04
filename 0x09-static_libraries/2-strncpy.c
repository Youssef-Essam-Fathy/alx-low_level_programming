#include "main.h"

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
