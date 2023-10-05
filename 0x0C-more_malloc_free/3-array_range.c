#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum range of values 
 * @max: maximum range of values
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *range;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	range = malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		range[a] = min++;

	return (range);
}
