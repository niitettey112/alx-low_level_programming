#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: parameter
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
	count++;
	for (a = 0; a < count; a++)
	{
		count--;
		rev = s[a];
		s[a] = s[count];
		s[count] = rev;
	}
}
