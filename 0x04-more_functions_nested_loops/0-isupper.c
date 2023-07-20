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
	for (c = 65; c <= 90; c++)
	{
		return (1);
	}
	return (0);
}
