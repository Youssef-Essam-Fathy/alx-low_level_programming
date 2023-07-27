#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer parameter
 * @n: array characters numbers
 *
 * Return: void
 **/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; j = (n - 1); i < j; i++, j--)
	{
		a[i] = a[i] + a[j];
		a[j] = a[i] - a[j];
		a[i] = a[i] - a[j];
	}
}
