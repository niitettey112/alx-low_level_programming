#include "main.h"
#include <string.h>

/**
 * _memset - function to fill memory
 * @s: pointer to the string
 * @b: the value to be filled
 * @n: the number of characters
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
