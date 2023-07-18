#include "main.h"

/**
 *print_sign - use the print_sign function to print
 *              the sign for a number
 *@n: a function input checker
 *
 *Return: returns 1 if 'n' is greater than '0'
 *         returns -1 if 'n' is less than '0'
 *         otherwise always 0 (Success)
 **/

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (0);
}
