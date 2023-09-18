#include "main.h"

/**
 * swap_int - function to swap numbers
 * @a: number to swap
 * @b: number to swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
