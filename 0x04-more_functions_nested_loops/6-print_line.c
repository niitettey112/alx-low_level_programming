#include "main.h"

/**
 * print_line - function to draw a straight line in terminal
 * @n: number of times to print character
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
