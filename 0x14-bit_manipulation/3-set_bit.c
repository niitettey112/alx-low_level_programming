#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: parameter
 * @index: parameter
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	
	unsigned long int setbit = 1UL << index;

	*n |= setbit;

	return (1);
}
