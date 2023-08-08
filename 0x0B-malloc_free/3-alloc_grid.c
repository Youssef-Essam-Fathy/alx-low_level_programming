#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to pointer integer or NULL
 **/

int **alloc_grid(int width, int height)
{
	int **arr, indx1, indx2;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (indx1 = 0; indx1 < height; indx1++)
		{
			arr[indx1] = malloc(sizeof(**arr) * width);
			if (arr[indx1] == 0)
			{
				while (indx1--)
					free(arr[indx1]);
				free(arr);
				return (NULL);
			}

			for (indx2 = 0; indx2 < width; indx2++)
				arr[indx1][indx2] = 0;
		}
	}
	return (arr);
}
