#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 If value is not present in array or if array is NULL,
 * or the first index where value is located
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (array == NULL || !value)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
		{
			return (array[indx]);
		}
	}
			return (-1);
}
