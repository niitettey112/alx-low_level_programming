#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: parameter 1
 * @n: parameter 2
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
		a[n] = t;
	}
}
