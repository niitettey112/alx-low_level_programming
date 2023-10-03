#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to create free space  assign by malloc
 * @grid: array
 * @height: row
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for ( ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
