#include "lists.h"

/**
 * free_listint2 - function that frees a linked list, and sets head to NULL
 * @head: parameter
 */

void free_listint2(listint_t **head)
{
	listint_t *node_ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node_ptr = *head;
		*head = node_ptr->next;
		free(node_ptr);
	}

}
