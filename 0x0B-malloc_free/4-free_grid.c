#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: integer pointer to pointer parameter
 * @height: the height of the grid
 * Return: void
 **/

void free_grid(int **grid, int height)
{
	int indx;

	for (indx = 0; indx < height; indx++)
		free(grid[indx]);
	free(grid);
}
