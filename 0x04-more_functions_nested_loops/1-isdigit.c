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
