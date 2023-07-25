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
	for (n = 0; a[n] != '\0'; n++)
	{
		if (a[n] % 10 != 0)
			printf("%d, ", a[n]);
	}
	printf("\n");
}
