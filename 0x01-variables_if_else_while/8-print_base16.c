#include <stdio.h>

/**
 * main- Printing numbers in base 16 lowercase
 *
 * Return:0
 */
int main(void)
{
	char hex_num;

	for (hex_num = '0'; hex_num <= '9'; hex_num++)
	{
		putchar(hex_num);
	}
	for (hex_num = 'a'; hex_num <= 'f'; hex_num++)
	{
		putchar(hex_num);
	}
	putchar('\n');
	return (0);
}
