#include "main.h"

/**
 * _memcpy - fucntion to copy memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
