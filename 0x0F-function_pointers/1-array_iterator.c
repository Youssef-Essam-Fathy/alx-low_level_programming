#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 *	as a parameter on each element of an array
 * @array: pointer integer
 * @size: size of array
 * @action: pointer to  function
 * Return: void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int  *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
