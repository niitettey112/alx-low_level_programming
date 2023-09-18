#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n number of array of integers
 * @a: array
 * @n: n elements
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
