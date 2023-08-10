#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: positive integer
 * Return: void
 **/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}

	return (ptr);
}
