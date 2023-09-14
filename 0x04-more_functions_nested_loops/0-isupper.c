#include "main.h"

/**
 * _isupper - function to check uppercase
 * @c: parameter
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
