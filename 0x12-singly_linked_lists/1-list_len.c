#include "lists.h"

/**
 * list_len - A function to return number of elements in linked list_t list
 * @h: parameter
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t node_element;

	node_element = 0;

	while (h != NULL)
	{
		node_element++;
		h = h->next;
	}
	return (node_element);
}
