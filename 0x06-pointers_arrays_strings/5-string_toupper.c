#include "main.h"

/**
 * string_toupper - function to change letters to uppercase
 * @a: parameter
 *
 * Return: n;
 */
char *string_toupper(char *a)
{
	int n;

	n = 0;
	while (a[n] != '\0')
	{
		if (a[n] >= 'a' && a[n] <= 'z')
		{
			a[n] = a[n] - 32;
		}
	}
	return (n);
}
