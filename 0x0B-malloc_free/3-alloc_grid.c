#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: the 2D array created, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
int **grid;
int row, col;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height);
   
if (grid == NULL)
{
return (NULL);
}

for (row = 0; row < height; row++)
{
grid[row] = malloc(sizeof(int) * width);
if (grid[row] == NULL)
{
for (col = 0; col < row; col++)
free(grid[col]);
free(grid);
return (NULL);
}
}
for (col = 0; col < width; col++)
grid[row][col] = 0;
return (grid);
}
