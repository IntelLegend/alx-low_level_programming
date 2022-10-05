#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns int matrix
 * @width: int
 * @height: int
 * Return: int matrix
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;

	if (width < 1 || height < 1)
		return (0);

	matrix = malloc(height * sizeof(int *));
	if (!matrix)
		return (0);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (!matrix[i])
		{
			for ( ; i >= 0; i--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (0);
		}
	}
	return (matrix);
}
