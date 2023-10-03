#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicates to new memory space location
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	c = malloc(sizeof(char) * (a + 1));

	if (c == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		c[b] = str[b];

	return (c);
}
