#include "holberton.h"

/**
 * get_bit - function that returns value of a bit at given index
 * @n: parameter
 * @index: parameter
 *
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	a = ((n >> index) & 1);

	return (a);
}
