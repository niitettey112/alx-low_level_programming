#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits to flip to get one
 * another
 * @n: parameter
 * @m: parameter
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_bits = 0;
	unsigned long int difference = n ^ m;

	while (difference > 0)
	{
		flip_bits += difference & 1;
		difference >>= 1:
	}

	return (flip_bits);
}
