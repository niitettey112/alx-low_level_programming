#include <stdio.h>

/**
 * main- combinations
 *
 * Return:0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
