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
