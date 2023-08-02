#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @in: integer to find sqrt
 * @valu: square root integer value
 *
 * Return: sqrt of an integer
 **/

int sqr(int in, int valu);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - find the square root
 *
 * @in: integer to find square root
 * @valu: square root integer value
 *
 * Return: integer
 **/

int sqr(int in, int valu)
{
if (valu * valu == in)
	return (valu);
else if (valu * valu < in)
	return (sqr(in, valu + 1));
else
	return (-1);
}
