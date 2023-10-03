#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - function to create a grid
 * @width: the width
 * @height: the height
 *
 * Return: pointer string
 */
int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **array;

	array = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == 0)
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
