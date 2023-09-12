#include "main.h"

/**
 * print_last_digit - function to print last digit
 * @j: parameter
 *
 * Return: i
 */
int print_last_digit(int j)
{
	int i = j % 10;

	i = (i < 0) ? -i : i;
	_putchar(i + '0');
	return (i);
}
