#include "lists.h"

/**
 * print_listint - function that prints all elements of a listint_t list
 * @h: parameter
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_n++;
	}
	return (count_n);
}
