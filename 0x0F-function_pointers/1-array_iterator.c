#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array element on a newline
 * @array: array
 * @size: size
 * @action: pointer to print
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
