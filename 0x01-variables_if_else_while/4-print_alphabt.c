#include <stdio.h>

/**
 * main- entry point of program
 *
 * Return:0
 */
int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		if (lower_alpha != 'q' && lower_alpha != 'e')
		{
			putchar(lower_alpha);
		}
	lower_alpha++;
	}
	putchar('\n');
	return (0);
}

