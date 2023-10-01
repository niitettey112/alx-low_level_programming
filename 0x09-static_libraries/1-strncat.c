#include "main.h"
#include <string.h>

/**
 * _strncat - function to add two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[dest_len + a] = src[a];
	}
	dest[dest_len + a] = '\0';
	return (dest);
}
