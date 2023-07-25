#include "main.h"

/**
 * print_array - prints array numbers
 *
 * @a: pointer parameter input
 * @n: integer input parameter
 *
 * Return: void
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
