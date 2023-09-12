#include "main.h"

/**
 * print_sign - Function to print the sign of a number
 * @n: parameter to print
 *
 * Return: 1 if positive, 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
