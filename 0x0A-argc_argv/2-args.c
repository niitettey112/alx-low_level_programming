#include <stdio.h>
#include "main.h"

/**
 * main - function to print all arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
