#include "lists.h"

/**
 * print_list - A function that prints all the elements of a List_t list
 * @h: parameter
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_element;

	node_element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
			h = h->next;
			node_element++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_element++;
	}
	return (node_element);
}
