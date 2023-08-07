#include "main.h"

/**
 * create_array - creates an array of chars,
 *		and initializes it with a specific char
 * @size: integer parameter showing size of array
 * @c: character
 * Return: character pointer or NULL
 **/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);

	while (size--)
		arr[size] = c;

	return (arr);
}
