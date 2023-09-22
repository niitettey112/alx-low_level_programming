#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: array
 * @n: number of elements of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
