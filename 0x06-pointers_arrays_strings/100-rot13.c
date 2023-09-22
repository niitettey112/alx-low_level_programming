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

	sr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	sr2[] = "opqrstuvwxyzabcdefghijklmnOPQRSTUVWXYZABCDEFGHIJKLMN";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; sr1[j] != '\0'; j++)
		{
			if (n[i] == sr1[j])
			{
				n[i] = sr2[j];
				break;
			}
		}
	}
	return (n);
}
