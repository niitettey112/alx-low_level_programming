#include "main.h"

/**
 * _isalpha - function that checks for alphabet character
 * @c: parameter to check
 *
 * Return: 1 if success else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
