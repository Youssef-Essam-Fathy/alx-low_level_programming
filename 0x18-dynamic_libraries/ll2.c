#include "main.h"

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

	do {
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

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
