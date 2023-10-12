#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers followed by newline
 *
 * @separator: string to be printed
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	int arg;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}
	for (a = 0; a < n; a++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);

		if (separator != NULL && a != n - 1)
			printf("%s", separator);
		if (a == n - 1)
			printf("\n");
	}
	va_end(args);
}
