#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string 
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int size1 = 0, size2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for ( ; s1[size1] != '\0'; size1++)
		;
	for ( ; s2[size2] != '\0'; size2++)
		;
	j = size1 + size2;
	p = malloc((sizeof(char) * j) + 1);
	if (p == 0)
		return (0);
	for ( ; i <= j; a++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
