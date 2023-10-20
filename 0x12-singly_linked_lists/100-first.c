#include <stdio.h>

/**
 * my_message - function to print before the main
 *
 */
void __attribute__((constructor)) my_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upone my back!\n");
}
