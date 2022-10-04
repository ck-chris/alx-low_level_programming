#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimentional grid previously created by your alloc_grid
 * @grid: the matrix
 * @height: number of rows
 * Return: pointer to matrix
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
