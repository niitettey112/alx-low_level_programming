#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * @str: parameter
 *
 * Return: 0
 */
void puts2(char *str)
{
	int counter  = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
		counter++;
	}
}
