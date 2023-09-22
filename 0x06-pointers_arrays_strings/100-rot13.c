#include "main.h"
#include <stdio.h>

/**
 * rot13 - fucntion to encode a string using rot13
 * @n: parameter
 *
 * Return: n
 */
char *rot13(char *n)
{
	int i;
	int j;

	char sr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sr2rot[] = "OPQRSTUVWXYZABCDEFGHIJKLMNopqrstuvwxyzabcdefghijklmn";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == sr1[j])
			{
				n[i] = sr2rot[j];
				break;
			}
		}
	}
	return (n);
}
