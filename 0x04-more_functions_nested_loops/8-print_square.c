#include "main.h"

/**
 * print_square - function that prints squares
 * @size: the number of squares to print
 *
 * Return: void
 */
void print_square(void)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
