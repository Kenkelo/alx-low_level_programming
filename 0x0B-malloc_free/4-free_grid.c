#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously created by my alloc_grid function
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
