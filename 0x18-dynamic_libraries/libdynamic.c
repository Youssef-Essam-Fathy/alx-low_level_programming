#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_islower - use the _islower function to check
 *              for lowercase characters
 *@c: a function input checker
 *
 *Return: returns 1 if 'c' is lowercase
 *         otherwise always 0 (Success)
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 *_isalpha - use the _islower function to check
 *              for letters
 *@c: a function input checker
 *
 *Return: returns 1 if 'c' is a letter
 *         otherwise always 0 (Success)
 **/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

/**
 * _abs - a function that computes the absolute value of an integer
 *
 *@n: takes in integer type input for a function
 *
 *Return: always 0 (Success)
 *
 **/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

/**
 *_isupper - check for upercase letters
 *
 *@c: an integer input
 *
 * Return: 1 in case uppercase letter
 *	always 0 (Success)
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

/**
 *_isdigit - checks for a digit (0 through 9)
 *
 *@c: an integer input
 *
 * Return: 1 in case '0' through '9'
 *	always 0 (Success)
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * _strlen - returns the string length
 *
 * @s: character pointer = string
 *
 * Return: string length
 **/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}

/**
 * _puts -  prints a string
 *
 * @s: A pointer
 *
 * Return: void
 **/

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}

/**
 * _strcpy - a pointer function
 *
 * @dest: character input parameter
 * @src: character input parameter
 *
 * Return: a character
 **/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * _atoi - converts a string into an integer
 *
 * @s: pointer input parameter
 *
 * Return: an integer value
 **/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

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
			do
			{
				if (needle[num + 1] == '\0')
					return (haystack);
				num++;
			} while (haystack[num] == needle[num]);
		}
		haystack++;
	}

	return (0);
}
