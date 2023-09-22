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
	strcat(src, dest);
	return (dest);
}
