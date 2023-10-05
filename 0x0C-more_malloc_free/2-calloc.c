#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for array
 * @nmemb: number of elements.
 * @size: size of element.
 *
 * Return: pointer to array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aaa;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	aaa = malloc(size * nmemb);

	if (aaa == NULL)
		return (NULL);

	for (b = 0; b < (size * nmemb); b++)
		aaa[b] = 0;

	return (aaa);
}
