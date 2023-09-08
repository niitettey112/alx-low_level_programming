#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Porgram entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	n %= 10;
	printf("%d and is ", n);

	if (n > 5)
	{
		printf("greater than 5\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("less than 6 and 0\n", n);
	}
	else
	{
		printf("and is 0\n", n);
	}
	return (0);
}
