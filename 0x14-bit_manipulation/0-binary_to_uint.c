#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: parameter
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
			ans = (ans << 1) + (*b - '0');
		else
			return (0);
		b++;
	}
	if (b == NULL)
		return (0);

	return (0);
}
