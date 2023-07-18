#include "main.h"

/**
 *_isalpha - use the _islower function to check
 *              for lowercase characters
 *@c: a function input checker
 *
 *Return: returns 1 if 'c' is a letter
 *         otherwise always 0 (Success)
 **/

int _isalpha(int c)
{
if (c >= 32 || c <= 126)
{
	return (0);
}
return (1);
}
