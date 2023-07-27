#include "main.h"

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
