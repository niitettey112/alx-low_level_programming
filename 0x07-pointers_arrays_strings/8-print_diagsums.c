#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print two diagnoals of a square marix integer
 * @a: input
 * @size: input
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int l_sum, r_sum, i;

	l_sum = 0;
	r_sum = 0;

	for (i = 0; a < size; i++)
	{
		l_sum = l_sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		r_sum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", l_sum, r_sum);
}
