#include "main.h"

/**
 * _strlen - function to return string length
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int lengthy = 0;

	while (*s != '\0')
	{
		lengthy++;
		s++;
	}

	return (lengthy);
}
