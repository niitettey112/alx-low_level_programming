#include "main.h"
#include <string.h>

/**
 * cap_string - function to capitalize a string
 * @str: parameter
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
		{
			a++;
		}

		if (str[a - 1] == '' ||
		    str[a - 1] == '\t' ||
		    str[a - 1] == '\n' ||
		    str[a - 1] == ',' ||
		    str[a - 1] == ';' ||
		    str[a - 1] == '.' ||
		    str[a - 1] == '!' ||
		    str[a - 1] == '?' ||
		    str[a - 1] == '"' ||
		    str[a - 1] == '(' ||
		    str[a - 1] == ')' ||
		    str[a - 1] == '{' ||
		    str[a - 1] == '}' ||
		    a == 0)
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
