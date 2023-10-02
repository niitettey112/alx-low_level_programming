#include <stdio.h>

/**
 * main - function to print the number of arguments passed
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)), char *argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
