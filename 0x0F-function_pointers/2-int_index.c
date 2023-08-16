#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: pointer integerr array
 * @size: integer
 * @cmp: function pointer
 * Return: integer value
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int indx = 0;

	if (array && size && cmp)
	{
		while (indx < size)
		{
			if (cmp(array[indx]))
				return (indx);
			indx++;
		}
	}
		return (-1);
}
