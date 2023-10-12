#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @seperator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int a;
	char *arg_s;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		arg_s = va_arg(args, char*);
		if (arg_s == NULL)
			printf("(nil)");
		else
			printf("%s", arg_s);

		if (seperator != NULL && a != n - 1)
			printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
