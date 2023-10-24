#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *node_ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node_ptr = head;
		head = head->next;
		free(node_ptr);
	}
}
