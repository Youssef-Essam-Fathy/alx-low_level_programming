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
if (c >= 'A'  c <= 'Z')
{
	return (1);
}
else if (c >= 'a' c <= 'z')
{
	return (1);
}
return (0);
}
