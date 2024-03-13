#include <stdio.h>

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 If value is not present in array or if array is NULL,
 * or the first index where value is located
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	/* Check if the array is NULL or the size is 0 */
	if (array == NULL || size == 0)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		/* Print the current search range */
		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		/* Calculate the middle index */
		mid = (low + high) / 2;

		/* Check if the middle element is the target value */
		if (array[mid] == value)
			return (mid);

		/* Adjust the search range based on the comparison with the target value */
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	/* If the value is not found, return -1 */
	return (-1);
}
