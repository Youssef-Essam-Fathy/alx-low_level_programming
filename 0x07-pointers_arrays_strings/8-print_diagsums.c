#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *		of a square matrix of integers
 *
 * @a: integer parameter
 * @size: size of square
 *
 * Return: void
 **/

void print_diagsums(int *a, int size)
{
	int var, sum1 = 0, sum2 = 0;

	for (var = 0; var < size; var++)
	{
		sum1 += a[var];
		sum2 += a[size - var - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
