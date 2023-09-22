#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
