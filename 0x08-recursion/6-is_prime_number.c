#include "main.h"

/**
 * prime_num - function to determine if n is a prime
 * @n: input
 * @i: input
 *
 * Return: 1 if n is a prime, 0 if not
 **/

int prime_num(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (n >= (i + 1) * (i * 1))
		return (prime_num(n, i + 1));

	return (1);
}

/**
 * is_prime_number - function to determine if n is a prime
 * @n: input
 *
 * Return: 1 if prime, 0 if not
 **/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_num(n, 2));
}



