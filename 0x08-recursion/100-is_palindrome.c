#include "main.h"

/**
 * _strlen_recursion - function to return string length
 * @s: string
 * Return: string length
 **/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}

}

/**
 * string_palindrome - function to check if string is a palindrome
 * @s: input
 * @n: input
 * @i: input
 * Return: 1 if palindrome, 0 if not
 **/

int string_palindrome(char *s, int n, int i)
{
	if (n <= i)
		return (1);

	if (s[i] != s[n])
		return (0);

	return (string_palindrome(s, n - 1, i + 1));
}

/**
 * is_palindrome - function to check if string is a palindrome
 * @s: input
 * Return: 1 if palindrome, 0 if not
 **/

int is_palindrome(char *s)
{
	return (string_palindrome(s, _strlen_recursion(s) - 1, 0));
}
