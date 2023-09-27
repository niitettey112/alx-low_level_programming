#include "main.h"

/**
 * _sqrt_recursion - function to print natural sqaure root of a number
 * @n: input
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (new_sqrt_recursion(n, 0));
}

/**
 * new_sqrt_root - find the natural square root of a number
 * @n: input
 * @i: iterator
 *
 * Return: restulting square root
 */
int new_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (new_sqrt_recursion(n, i + 1));
}
