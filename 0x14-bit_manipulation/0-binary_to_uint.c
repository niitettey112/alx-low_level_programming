#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: parameter
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int a;

	for  (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		ans = (ans << 1) + (b[a] - '0');
	}
	if (b == NULL)
		return (0);

	return (ans);
}
