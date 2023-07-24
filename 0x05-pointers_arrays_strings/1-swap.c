#include "main.h"

/**
 *swap_int - swap values of two integers
 *
 *@a: first integer input
 *@b: second integer input
 *
 *Return: void
 **/

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
