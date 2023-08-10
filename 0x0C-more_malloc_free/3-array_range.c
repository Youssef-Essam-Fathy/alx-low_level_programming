#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: integer value
 **/

int *array_range(int min, int max)
{
	int length, indx;
	int *p;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (!p)
		return (NULL);
	for (indx = 0; indx < length; indx++)
		p[indx] = min++;
	return (p);
}
