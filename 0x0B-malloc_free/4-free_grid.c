#include <stdlib.h>
/**
 * free_grid - returns void
 * @grid: int array array
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height < 1)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
