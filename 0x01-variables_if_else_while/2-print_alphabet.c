#include <stdio.h>

/**
 * main- entry point of program
 *
 * Return:0
 */
int main(void)
{
	char alpha_lower = 'a';

	while (alpha_lower <= 'z')
	{
		putchar(alpha_lower);
		alpha_lower++;
	}

	putchar('\n');
	return (0);
}
