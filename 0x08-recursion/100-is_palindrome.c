#include "main.h"

/**
 * is_palindrome - function to check if string is palindrome
 * @s: input
 *
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	return (is_palindrome(s, _strlen_recursion(s) - 1, 0));
}

/**
 * string_is_palindrome - check if string is a palindrome
 * @s: input
 * @n: input
 * @i: input
 * Return: 1 if palindrome, 0 if not
 **/

int string_is_palindrome(char *s, int n, int i)
{
	if (n <= i)
		return (1);

	if (s[i] != s[n])
		return (0);

	return (string_is_palindrome(s, n - 1, i + 1));
}

/**
 * _strlen_recursion - function to return the length of string
 * @s: input
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
