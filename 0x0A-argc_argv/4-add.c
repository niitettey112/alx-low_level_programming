#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum = 0;

	for (b = 0; argv[a][b]; b++)
	{
		if (argv[a][b] < '0' || argv[a][b] > '9')
		{
			return (printf("Error\n"), 1);
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
