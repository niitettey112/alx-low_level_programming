#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates n butes of string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int length_1 = 0, length_2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		length_1++;
	for (a = 0; s2[a] != '\0'; a++)
		length_2++;

	s = malloc(sizeof(char) * (length_1 + n) + 1);
	if (s == NULL)
		return (NULL);
	if (n >= length_2)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			s[a] = s1[a];
		}
		for (a = 0; s2[a] != '\0'; a++)
		{
			s[length_1 + a] = s2[a];
		}
		s[length_1 + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			s[a] = s1[a];
		}
		for (a = 0; a < n; a++)
		{
			s[length_1 + a] = s2[a];
		}
		s[length_1 + a] = '\0';
	}
	return (s);
}
