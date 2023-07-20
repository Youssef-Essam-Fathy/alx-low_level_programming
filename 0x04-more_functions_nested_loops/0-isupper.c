#include "main.h"

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
