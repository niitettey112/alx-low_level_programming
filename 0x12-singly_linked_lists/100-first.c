#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 *first - function to print before the main
 *
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upone my back!\n");
}
