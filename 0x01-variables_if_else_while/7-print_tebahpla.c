#include <stdio.h>

/**
 * main- Print lower case alphabets in reverse
 *
 * Return:0
 */
int main(void)
{
	char alpha_rev;

	for (alpha_rev = 'z'; alpha_rev >= 'a'; alpha_rev--)
	{
		putchar(alpha_rev);
	}
	putchar('\n');
	return (0);
}
