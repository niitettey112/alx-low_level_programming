#include "main.h"

/**
 * print_triangle - function to print triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (c = size - a; c != 0; c--)
		{
			_putchar(' ');
		}
		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
