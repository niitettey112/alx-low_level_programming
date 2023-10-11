#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function pointer that prints a name
 *
 * @name: string
 * @f: function pointer
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
