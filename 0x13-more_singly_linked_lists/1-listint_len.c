#include "lists.h"

/**
 * listint_len - function to return number of elements in linked listint_t list
 * @h: parameter
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count_num_node = 0;

	while (h != NULL)
	{
		count_num_node += 1;
		h = h->next;
	}

	return (count_num_node);
}
